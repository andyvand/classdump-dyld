/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Finder
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLInlinePreviewDelegate <NSObject>
@optional
-(void)inlinePreview:(id)arg1 willChangeToState:(int)arg2;
-(CGRect*)inlinePreview:(id)arg1 contentFrameForPreviewItem:(id)arg2;
-(CGRect*)inlinePreview:(id)arg1 rolloverFrameForPreviewItem:(id)arg2;
-(void)inlinePreview:(id)arg1 willLoadPreviewItem:(id)arg2;
-(int)inlinePreview:(id)arg1 expectedModeForPreviewItem:(id)arg2 flavor:(int*)arg3;
-(void)inlinePreview:(id)arg1 didLoadPreviewItem:(id)arg2;
-(void)inlinePreview:(id)arg1 didChangeToState:(int)arg2;
-(char)inlinePreviewShouldAlwaysHandleMultiClicks:(id)arg1;

@required
-(CGRect*)inlinePreview:(id)arg1 frameForPreviewItem:(id)arg2;

@end
