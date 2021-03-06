/*
 * This file is a part of QComicBook.
 *
 * Copyright (C) 2005-2006 Pawel Stolowski <pawel.stolowski@wp.pl>
 *
 * QComicBook is free software; you can redestribute it and/or modify it
 * under terms of GNU General Public License by Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY. See GPL for more details.
 */

/*! \file bookmarks.h */

#ifndef __BOOKMARKS_H
#define __BOOKMARKS_H

#include <QString>
#include <QList>
#include <QMap>
#include <QAction>
#include "Bookmark.h"

class QMenu;

namespace QComicBook
{
	class Bookmarks
	{
		private:
			QList<Bookmark *> blist; //!<pointers to bookmark objects
			QMap<QAction *, Bookmark *> bmap; //!<for fast action->bookmark lookup
			QMenu *bmenu; //!<popup menu containing bookmarks
			bool changed; //!<flag indicator to decide if bookmarks should be saved
			QString fname; //!<bookmarks file

		public:
			Bookmarks(QMenu *menu);
			~Bookmarks();
			bool load();
			bool save();

			void set(const QString &cbname, int page);
			bool remove(const QString &cbname);
			bool remove(QAction *action);
			bool get(QAction *action, Bookmark &b);
			QList<Bookmark> get() const;
			bool exists(const QString &cbname);
	};
}

#endif

