/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCSourceTextView.h>

@class NSTextField, NSImageView, NSString, QCProgrammablePatch, NSUndoManager, NSTimer;

@interface QCProgrammablePatchView : QCSourceTextView {

	NSTextField* _statusField;
	NSImageView* _statusImage;
	NSString* _sourceType;
	QCProgrammablePatch* _targetPatch;
	NSUndoManager* _undoManager;
	NSTimer* _typingTimer;
	char _disableUpdate;
	void** _unused2[3];

}
+(void)initialize;
+(id)_keywordsFromString:(id)arg1 ;
+(id)_keywordsAndColorsFromXML:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)undo:(id)arg1 ;
-(void)redo:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(void)_setUndoManager:(id)arg1 ;
-(void)_updateSource:(id)arg1 ;
-(void)_setCompileResult:(id)arg1 ;
-(void)_patchUpdated:(id)arg1 ;
-(void)setProgrammablePatch:(id)arg1 sourceType:(id)arg2 ;
-(void)setStatusField:(id)arg1 ;
-(id)statusField;
-(void)setStatusImage:(id)arg1 ;
-(id)statusImage;
@end

