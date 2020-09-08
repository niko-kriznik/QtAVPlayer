/*********************************************************
 * Copyright (C) 2020, Val Doroshchuk <valbok@gmail.com> *
 *                                                       *
 * This file is part of QtAVPlayer.                      *
 * Free Qt Media Player based on FFmpeg.                 *
 *********************************************************/

#ifndef QAVVIDEOCODEC_P_H
#define QAVVIDEOCODEC_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API. It exists purely as an
// implementation detail. This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "qavcodec_p.h"
#include "qavvideoframe_p.h"

QT_BEGIN_NAMESPACE

class QAVVideoCodecPrivate;
class QAbstractVideoSurface;
class QAVHWDevice;
class Q_AVPLAYER_EXPORT QAVVideoCodec : public QAVCodec
{
public:
    QAVVideoCodec(QObject *parent = nullptr);
    QAVVideoCodec(AVCodec *c, QObject *parent = nullptr);

    void setDevice(QAVHWDevice *d);
    QAVHWDevice *device() const;
    void setVideoSurface(QAbstractVideoSurface *surface);

private:
    Q_DISABLE_COPY(QAVVideoCodec)
    Q_DECLARE_PRIVATE(QAVVideoCodec)
};

QT_END_NAMESPACE

#endif
