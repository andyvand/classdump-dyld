/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VCChannelModel;

@interface VCChannel : NSObject {

	VCChannelModel* _model;

}
+(id)OpenNewChannelWithOptions:(id)arg1 ;
-(id)connectionData:(char)arg1 ;
-(void)setSavedConnectionData:(id)arg1 ;
-(id)getSavedConnectionData;
-(id)connectionData;
-(void)prepareConnectionWithRemoteConnectionData:(id)arg1 ;
-(id)remoteIPPort;
-(int)socket;
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(void)close;
@end

