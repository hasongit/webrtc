/*
 *  Copyright (c) 2018 The WebRTC project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
 */

#include "api/video_codecs/builtin_video_decoder_factory.h"

#include "media/engine/internaldecoderfactory.h"
#include "rtc_base/ptr_util.h"

namespace webrtc {

std::unique_ptr<VideoDecoderFactory> CreateBuiltinVideoDecoderFactory() {
  return rtc::MakeUnique<InternalDecoderFactory>();
}

}  // namespace webrtc
