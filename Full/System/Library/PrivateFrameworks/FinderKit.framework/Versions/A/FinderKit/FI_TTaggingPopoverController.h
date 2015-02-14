/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <FinderKit/FI_TPopoverController.h>

@interface FI_TTaggingPopoverController : FI_TPopoverController {

	TNSRef<FI_TTagEditorController *> _editorController;
	TNSRef<FI_TTextField *> _assignTagsToTitleText;

}
-(id)initWithWidth:(double)arg1 ;
-(void)setNodes:(const TFENodeVector*)arg1 ;
-(void)showPopoverForNodes:(const TFENodeVector*)arg1 belowView:(id)arg2 verticalInset:(double)arg3 ;
-(Class)popoverClass;
-(BOOL)useSeparatorsBetweenSubviews;
-(void)showPopoverOverNode:(const TFENode*)arg1 forNodes:(const TFENodeVector*)arg2 browserViewController:(id)arg3 preferredEdge:(unsigned long long)arg4 ;
-(void)finishedEditing;
-(void)setAssignToTitleTextForNodes:(const TFENodeVector*)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(void)popoverDidShow:(id)arg1 ;
-(void)popoverWillClose:(id)arg1 ;
-(void)popoverDidClose:(id)arg1 ;
@end

