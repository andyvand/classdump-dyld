/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPreviewViewDelegate <NSObject>
@optional
-(void)previewView:(id)arg1 willLoadPreviewItem:(id)arg2;
-(void)previewView:(id)arg1 didLoadPreviewItem:(id)arg2;
-(void)previewView:(id)arg1 willShowPreviewItem:(id)arg2;
-(void)previewView:(id)arg1 didShowPreviewItem:(id)arg2;
-(void)previewView:(id)arg1 timedOutLoadingPreviewItem:(id)arg2;
-(char)previewView:(id)arg1 shouldPreviewItem:(id)arg2;
-(id)previewView:(id)arg1 customViewForPreviewItem:(id)arg2;
-(unsigned long long)previewView:(id)arg1 validateDrop:(id)arg2 onPreviewItem:(id)arg3;
-(char)previewView:(id)arg1 acceptDrop:(id)arg2 onPreviewItem:(id)arg3;
-(id)previewView:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2 forPreviewItem:(id)arg3;
-(char)previewView:(id)arg1 writePreviewItem:(id)arg2 toPasteboard:(id)arg3;
-(unsigned long long)previewView:(id)arg1 draggingSourceOperationMaskForLocal:(char)arg2;
-(char)previewView:(id)arg1 canShowPathForItem:(id)arg2;

@end

