/*
 * This file is a part of QComicBook.
 *
 * Copyright (C) 2005 Pawel Stolowski <yogin@linux.bydg.org>
 *
 * QComicBook is free software; you can redestribute it and/or modify it
 * under terms of GNU General Public License by Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY. See GPL for more details.
 */

#ifndef __ICONVIEWTHUMBNAIL_H
#define __ICONVIEWTHUMBNAIL_H

/*! \file iconviewthumbnail.h */

#include <qiconview.h>
#include "thumbnailitem.h"

namespace QComicBook
{
	class IconViewThumbnail: public QIconViewItem, public ThumbnailItem
	{
		public:
			IconViewThumbnail(QIconView *view, int page, const QPixmap &pixmap);
			virtual ~IconViewThumbnail();
	};
}

#endif
