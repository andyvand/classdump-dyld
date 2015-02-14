/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:21 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebBookmark;

@interface BookmarkURLConfirmer : NSObject {

	WebBookmark* _bookmark;
	id _delegate;
	SEL _didEndSelector;
	id _contextInfo;

}
+(char)_bookmarkRequiresConfirmation:(id)arg1 inWindow:(id)arg2 ;
+(void)_performCallbackWithDelegate:(id)arg1 didEndSelector:(SEL)arg2 bookmark:(id)arg3 result:(char)arg4 contextInfo:(id)arg5 ;
+(void)beginURLConfirmationForBookmark:(id)arg1 modalForWindow:(id)arg2 modalDelegate:(id)arg3 didEndSelector:(SEL)arg4 contextInfo:(id)arg5 ;
-(id)_initWithBookmark:(id)arg1 modalDelegate:(id)arg2 didEndSelector:(SEL)arg3 contextInfo:(id)arg4 ;
-(void)_beginConfirmationModalForWindow:(id)arg1 ;
-(void)_performCallbackWithResult:(char)arg1 ;
@end

