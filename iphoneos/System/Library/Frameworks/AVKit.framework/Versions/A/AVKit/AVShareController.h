/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AVKit.framework/Versions/A/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVSharingServicesDelegate;
#import <AVKit/AVKit-Structs.h>
@interface AVShareController : NSObject {

	id<AVSharingServicesDelegate> _delegate;

}

@property (__weak) id<AVSharingServicesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)showSharingServicePickerForPlayerView:(id)arg1 relativeToRect:(CGRect)arg2 ofView:(id)arg3 preferredEdge:(unsigned long long)arg4 ;
-(id)shareItemURL;
-(void)populateSharingServicesForPlayerView:(id)arg1 menu:(id)arg2 ;
-(void)setDelegate:(id<AVSharingServicesDelegate>)arg1 ;
-(id<AVSharingServicesDelegate>)delegate;
@end

