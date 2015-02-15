/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:37 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class IKThumbnailBuilder;

@interface IKThumbnailOperation : NSOperation {

	id _delegate;
	SEL _didEndSelector;
	char _executing;
	char _finished;
	char _delegateNotified;
	IKThumbnailBuilder* _thumbnail;

}
+(id)operationWithThumbnail:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3 ;
-(id)initWithThumbnail:(id)arg1 delegate:(id)arg2 didEndSelector:(SEL)arg3 ;
-(void)notifyDelegate;
-(void)dealloc;
-(void)cancel;
-(void)main;
@end

