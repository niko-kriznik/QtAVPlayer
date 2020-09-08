/*********************************************************
 * Copyright (C) 2020, Val Doroshchuk <valbok@gmail.com> *
 *                                                       *
 * This file is part of QtAVPlayer.                      *
 * Free Qt Media Player based on FFmpeg.                 *
 *********************************************************/

#ifndef QAVHWDEVICE_VAAPI_DRM_EGL_P_H
#define QAVHWDEVICE_VAAPI_DRM_EGL_P_H

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

#include "qavhwdevice_p.h"

QT_BEGIN_NAMESPACE

class QAVHWDevice_VAAPI_DRM_EGLPrivate;
class Q_AVPLAYER_EXPORT QAVHWDevice_VAAPI_DRM_EGL : public QObject, public QAVHWDevice
{
public:
    QAVHWDevice_VAAPI_DRM_EGL(QObject *parent = nullptr);
    ~QAVHWDevice_VAAPI_DRM_EGL();

    AVPixelFormat format() const override;
    bool supportsVideoSurface(QAbstractVideoSurface *surface) const override;
    QVideoFrame decode(const QAVVideoFrame &frame) const override;

private:
    QScopedPointer<QAVHWDevice_VAAPI_DRM_EGLPrivate> d_ptr;
    Q_DISABLE_COPY(QAVHWDevice_VAAPI_DRM_EGL)
    Q_DECLARE_PRIVATE(QAVHWDevice_VAAPI_DRM_EGL)
};

QT_END_NAMESPACE

#endif
