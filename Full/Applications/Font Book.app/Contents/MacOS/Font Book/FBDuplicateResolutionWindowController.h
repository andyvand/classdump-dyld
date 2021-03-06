/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Font Book.app/Contents/MacOS/Font Book
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSWindowController.h>
#import <Font Book/NSWindowDelegate.h>

@class NSPanel, FBBackgroundView, FBDuplicateResolutionView, NSSegmentedControl, NSButton, NSTextField, NSImageView, NSTextView, NSScrollView, NSBox, NSDictionary, NSMutableDictionary, NSArray, NSMutableSet, NSString, NSLayoutConstraint, NSNumberFormatter, FBFace, FBDuplicateResolutionMatrix;

@interface FBDuplicateResolutionWindowController : NSWindowController <NSWindowDelegate> {

	NSPanel* panel;
	FBBackgroundView* view;
	FBDuplicateResolutionView* preferredFaceNavigationControl;
	NSSegmentedControl* duplicateSetNavigationControl;
	NSButton* acceptChangesButton;
	NSButton* resolveCurrentDuplicateButton;
	NSButton* cancelButton;
	NSTextField* navigationPositionField;
	NSButton* resolveByTrashingCheckbox;
	NSButton* revealInFinderButton;
	NSTextField* fontNameField;
	NSImageView* fontProtectedImage;
	NSTextView* sampleView;
	NSScrollView* sampleScrollView;
	NSTextField* currentPreferredFaceField;
	NSTextField* fontVersionField;
	NSTextField* fontAccessField;
	NSTextField* fontFileField;
	NSTextField* fontDateField;
	NSTextField* isInUseField;
	NSBox* separatorBox;
	NSDictionary* duplicateFaces;
	NSMutableDictionary* preferredFaces;
	NSArray* psNames;
	NSMutableSet* reviewedNames;
	long long currentDuplicateIndex;
	long long currentPreferredFaceIndex;
	long long preferredFaceOffset;
	NSString* resolveAllDuplicatesButtonText;
	NSString* resolveCurrentDuplicateButtonText;
	char _didAwakeFromNib;
	NSLayoutConstraint* _oldButtonConstraint;
	NSNumberFormatter* _formatter;

}

@property (retain) NSLayoutConstraint * oldButtonConstraint;              //@synthesize oldButtonConstraint=_oldButtonConstraint - In the implementation block
@property (assign) long long currentDuplicateIndex; 
@property (assign) long long currentPreferredFaceIndex; 
@property (assign) long long preferredFaceOffset; 
@property (retain) NSDictionary * duplicateFaces; 
@property (retain) NSMutableDictionary * preferredFaces; 
@property (retain,readonly) NSArray * psNames; 
@property (retain) NSMutableSet * reviewedNames; 
@property (readonly) NSArray * currentDuplicates; 
@property (readonly) FBFace * currentFace; 
@property (readonly) FBDuplicateResolutionMatrix * matrix; 
@property (assign) NSNumberFormatter * formatter;                         //@synthesize formatter=_formatter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)windowNibName;
-(void)_registeredFontsChanged:(id)arg1 ;
-(FBFace *)currentFace;
-(void)startDuplicateResolution:(id)arg1 forFaces:(id)arg2 ;
-(void)switchToPSName:(id)arg1 ;
-(void)setCurrentDuplicateIndex:(long long)arg1 ;
-(NSArray *)currentDuplicates;
-(void)_switchToFaceIndex:(long long)arg1 ;
-(NSDictionary *)duplicateFaces;
-(void)setReviewedNames:(NSMutableSet *)arg1 ;
-(void)_generateDuplicateFaces:(id)arg1 ;
-(NSArray *)psNames;
-(long long)currentDuplicateIndex;
-(NSMutableSet *)reviewedNames;
-(void)_doResolution:(id)arg1 ;
-(long long)currentPreferredFaceIndex;
-(void)_switchToPreferredFace:(long long)arg1 ;
-(void)setPSNames:(id)arg1 ;
-(void)setDuplicateFaces:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)preferredFaces;
-(void)setPreferredFaces:(NSMutableDictionary *)arg1 ;
-(void)navigate:(id)arg1 ;
-(void)finishDuplicateResolution:(id)arg1 ;
-(void)resolveSingleDuplicate:(id)arg1 ;
-(void)resolveByTrashing:(id)arg1 ;
-(void)selectPreferredFace:(id)arg1 ;
-(void)cancelDuplicateResolution:(id)arg1 ;
-(void)setCurrentPreferredFaceIndex:(long long)arg1 ;
-(long long)preferredFaceOffset;
-(void)setPreferredFaceOffset:(long long)arg1 ;
-(NSLayoutConstraint *)oldButtonConstraint;
-(void)setOldButtonConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_rebuildDisplay;
-(void)revealInFinder:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)showHelp:(id)arg1 ;
-(FBDuplicateResolutionMatrix *)matrix;
-(NSNumberFormatter *)formatter;
-(void)setFormatter:(NSNumberFormatter *)arg1 ;
-(void)awakeFromNib;
-(id)windowNibName;
-(void)windowDidLoad;
@end

