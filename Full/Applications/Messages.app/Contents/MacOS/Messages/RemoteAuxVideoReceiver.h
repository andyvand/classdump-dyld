/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:40:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Messages.app/Contents/MacOS/Messages
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Messages/AuxVideoReceiver.h>

@protocol IMAuxVideoProvider;
@class IMRemoteObject;

@interface RemoteAuxVideoReceiver : AuxVideoReceiver {

	IMRemoteObject*<IMAuxVideoProvider> _videoProvider;

}
-(void)performActionForControlWithIdentifier:(id)arg1 control:(id)arg2 ;
-(void)_mainThreadClientDidDisconnect:(id)arg1 ;
-(void)_connectionUpdated:(id)arg1 ;
-(void)_clientDidDisconnect:(id)arg1 ;
-(id)_controls:(id)arg1 withVolumeLevel:(double)arg2 ;
-(void)provider:(id)arg1 bundleID:(id)arg2 connectWithPixelFormat:(unsigned)arg3 videoStills:(char)arg4 replacement:(char)arg5 audioChannels:(int)arg6 controlsDictionary:(id)arg7 ;
-(void)setControls:(id)arg1 ;
-(void)dealloc;
-(void)setFrameRate:(double)arg1 ;
@end
