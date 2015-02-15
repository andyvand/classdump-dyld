/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/VideoConference.framework/Versions/A/VideoConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VideoConference/VideoConference-Structs.h>
@class NSData, NSDictionary;

@interface VCChannelModel : NSObject {

	tagHANDLE* _hVCChannel;
	NSData* _localConnectionData;
	NSDictionary* _optionsDictionary;

}
-(id)optionsDictionary;
-(tagHANDLE*)hVCChannel;
-(id)localConnectionData;
-(void)sethVCChannel:(tagHANDLE*)arg1 ;
-(void)setLocalConnectionData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setOptionsDictionary:(id)arg1 ;
@end

