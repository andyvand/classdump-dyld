/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:46 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSWindow, QCPatchEditorView, QCPatchManagerView;

@interface QCCompositionEditor : NSObject {

	NSWindow* window;
	QCPatchEditorView* editorView;
	QCPatchManagerView* managerView;

}
+(long long)numberOfRowsInTableView:(id)arg1 ;
+(id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3 ;
+(void)doubleClick:(id)arg1 ;
+(void)setup;
+(void)addPatch:(id)arg1 ;
+(void)removePatch:(id)arg1 ;
+(void)didUpdatePatchRendering:(id)arg1 ;
-(void)windowWillClose:(id)arg1 ;
-(id)initWithPatch:(id)arg1 ;
@end

