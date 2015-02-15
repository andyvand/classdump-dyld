/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Preview.app/Contents/MacOS/Preview
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PVWindowController, NSArrayController, NSColor;

@interface PVToolController : NSObject {

	PVWindowController* _windowController;
	long long _currentToolTag;
	long long _lastSavedToolImage;
	long long _lastSavedToolPDF;
	long long _lastSavedToolC3D;
	long long _lastSavedToolQuickLook;
	long long _lastSavedToolLoading;
	long long _lastSavedToolImageForLoupe;
	long long _lastSavedToolPDFForLoupe;
	long long _lastSavedToolC3DForLoupe;
	long long _lastSavedToolQuickLookForLoupe;
	long long _lastSavedToolLoadingForLoupe;
	long long _lastSelectionToolUsed;
	char _loupeToolAllowed;
	NSArrayController* _annotationsController;
	char _isRestoringLastTool;
	NSColor* _toolColor;
	NSColor* _fillColor;

}

@property (readonly) PVWindowController * windowController;                //@synthesize windowController=_windowController - In the implementation block
@property (retain) NSArrayController * annotationsController; 
@property (assign) long long currentToolTag;                               //@synthesize currentToolTag=_currentToolTag - In the implementation block
@property (nonatomic,retain) NSColor * toolColor;                          //@synthesize toolColor=_toolColor - In the implementation block
@property (nonatomic,retain) NSColor * fillColor;                          //@synthesize fillColor=_fillColor - In the implementation block
+(id)colorForTag:(long long)arg1 ;
+(id)defaultColorForAnnotationType:(unsigned long long)arg1 ;
+(id)_colorsNormal;
+(id)_colorMenuImageForColor:(id)arg1 withAdornment:(id)arg2 andPadding:(char)arg3 ;
+(unsigned long long)_annotationTypeForToolTag:(long long)arg1 ;
+(id)colorMenuImageForColor:(id)arg1 ;
+(id)stringForToolTag:(long long)arg1 ;
-(char)validateSender:(id)arg1 ;
-(char)isLoupeEnabled;
-(id)annotationOptionsMenuItemForSelection;
-(id)annotationOptionsMenuItemForAnnotation;
-(id)annotationOptionsMenuItemForNote;
-(void)updateSubtoolbarToolVisibility;
-(void)updateSubtoolbarAttributeVisibility;
-(long long)currentToolTag;
-(void)selectDefaultTool;
-(id)initWithWindowController:(id)arg1 ;
-(void)setAnnotationsController:(NSArrayController *)arg1 ;
-(void)initializeLoupeToolAllowedState;
-(void)toggleLoupeTool;
-(char)isLoupeToolAllowed;
-(void)saveCurrentTool;
-(void)restoreLastTool;
-(void)selectToolWithToolTag:(long long)arg1 ;
-(void)selectNoTool;
-(char)validateAKToolSender:(id)arg1 ;
-(void)selectToolForSender:(id)arg1 ;
-(void)selectAKToolForSender:(id)arg1 ;
-(NSArrayController *)annotationsController;
-(void)universalAccessCloseViewSettingsChanged:(id)arg1 ;
-(void)flagsChangedNotification:(id)arg1 ;
-(char)_isToolEnabledForSender:(id)arg1 ;
-(id)imageForSender:(id)arg1 ;
-(id)_colorForTag:(long long)arg1 ;
-(NSColor *)toolColor;
-(id)_colorForCurrentSelectionOrToolForFill:(char)arg1 ;
-(char)_toolSupportsColor;
-(char)_toolSupportsFillColor;
-(char)_toolSupportsNoteColor;
-(char)_toolSupportsBorder;
-(char)_toolSupportsArrows;
-(char)_toolSupportsShadow;
-(char)_isToolEnabledForTag:(long long)arg1 ;
-(long long)_mungedToolTagForToolTag:(long long)arg1 ;
-(char)_isToolEnabledForKeyPathName:(id)arg1 ;
-(long long)_defaultToolForCurrentView;
-(void)_selectRealToolWithTag:(long long)arg1 ;
-(void)_performActionForOneShotToolWithTag:(long long)arg1 ;
-(void)_selectColorAttributeWithTag:(long long)arg1 ;
-(long long)_lastToolForCurrentView;
-(long long)_lastToolForCurrentViewForLoupe;
-(id)_annotationOptionsMenuItemForPurpose:(unsigned long long)arg1 ;
-(void)_annotationOptionsViewMenuAction1:(id)arg1 ;
-(void)_annotationOptionsViewMenuAction2:(id)arg1 ;
-(void)_annotationOptionsViewMenuAction3:(id)arg1 ;
-(void)_annotationOptionsViewMenuActionCommon:(id)arg1 partToTagArray:(const long long*)arg2 arrayCount:(long long)arg3 ;
-(id)_annotationOptionsMenuForPurpose:(unsigned long long)arg1 ;
-(id)_noteColorWidgetImageForColor:(id)arg1 ;
-(void)_restoreLastToolForLoupe;
-(void)_saveCurrentToolForLoupe;
-(void)setCurrentToolTag:(long long)arg1 ;
-(void)setToolColor:(NSColor *)arg1 ;
-(id)annotationOptionsMenuForAnnotation;
-(id)annotationOptionsMenuForSelection;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(PVWindowController *)windowController;
-(char)validateMenuItem:(id)arg1 ;
-(NSColor *)fillColor;
-(void)setFillColor:(NSColor *)arg1 ;
-(char)validateToolbarItem:(id)arg1 ;
@end
