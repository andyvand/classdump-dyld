/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/IKViewController.h>

@class IKPTContentViewController, NSButton, IKImageBrowserView, IKPTCenteredTextLayer, NSString, NSMutableDictionary;

@interface IKPTImporterController : IKViewController {

	IKPTContentViewController* _ikpt_contentViewController;
	NSButton* _editButton;
	NSButton* _cancelButton;
	NSButton* _setButton;
	IKImageBrowserView* _imageBrowser;
	IKPTCenteredTextLayer* _messageLayer;
	NSString* _selectedSourceID;
	NSMutableDictionary* _sourceIdentifiersToContents;
	char _hasInvalidContents;
	char _loadingFaces;
	char _invalidateShowMessageLayer;

}

@property (assign) IKPTContentViewController * ikpt_contentViewController;              //@synthesize ikpt_contentViewController=_ikpt_contentViewController - In the implementation block
@property (assign) IKImageBrowserView * imageBrowser;                                   //@synthesize imageBrowser=_imageBrowser - In the implementation block
@property (assign) NSButton * editButton;                                               //@synthesize editButton=_editButton - In the implementation block
@property (assign) NSButton * cancelButton;                                             //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign) NSButton * setButton;                                                //@synthesize setButton=_setButton - In the implementation block
@property (retain) NSString * selectedSourceID; 
+(id)noItemsLabel;
+(id)loadingRecentsLabel;
+(id)loadingPhotoStreamLabel;
+(id)noPhotoStreamContentLabel;
+(id)loadingFacesLabel;
+(id)noFacesLabel;
-(id)imageBrowser:(id)arg1 itemAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfItemsInImageBrowser:(id)arg1 ;
-(void)imageBrowser:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2 ;
-(void)imageBrowserSelectionDidChange:(id)arg1 ;
-(void)imageBrowser:(id)arg1 removeItemsAtIndexes:(id)arg2 ;
-(void)updateContentLayout;
-(NSButton *)setButton;
-(id)currentPictureFromRecents;
-(CGRect)gridSelectionScreenRect;
-(IKPTContentViewController *)ikpt_contentViewController;
-(IKImageBrowserView *)imageBrowser;
-(void)setImageBrowser:(IKImageBrowserView *)arg1 ;
-(void)setIkpt_contentViewController:(IKPTContentViewController *)arg1 ;
-(void)updateCustomSourcesWithAddedSources:(id)arg1 removedSources:(id)arg2 ;
-(void)setSelectedSourceID:(NSString *)arg1 ;
-(void)setCancelButton:(NSButton *)arg1 ;
-(void)setupContentLayers;
-(NSString *)selectedSourceID;
-(void)updateRecentPictures;
-(void)setSelectedImage;
-(void)hideMessageLayerForSource:(id)arg1 ;
-(void)updateSampleUserPicturesUsingQL:(char)arg1 ;
-(void)updateContentsForFaces;
-(void)updateContentsForPhotoStream;
-(void)displayMessage:(id)arg1 forSource:(id)arg2 conditionedOnEmptySource:(char)arg3 ;
-(char)shouldAcceptDrop:(id)arg1 ;
-(char)importDroppedImage:(id)arg1 ;
-(id)sourceArrayWithPadding:(id)arg1 fillEmpty:(char)arg2 addCurrentIfNeeded:(char)arg3 ;
-(void)updateMessageLayerAttributes;
-(void)edit:(id)arg1 ;
-(void)setSetButton:(NSButton *)arg1 ;
-(void)dealloc;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(void)loadView;
-(void)paste:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)awakeFromNib;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(char)prepareForDragOperation:(id)arg1 ;
-(void)concludeDragOperation:(id)arg1 ;
-(void)set:(id)arg1 ;
-(NSButton *)editButton;
-(void)setEditButton:(NSButton *)arg1 ;
-(NSButton *)cancelButton;
-(char)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3 ;
-(void)invalidateContents;
@end

