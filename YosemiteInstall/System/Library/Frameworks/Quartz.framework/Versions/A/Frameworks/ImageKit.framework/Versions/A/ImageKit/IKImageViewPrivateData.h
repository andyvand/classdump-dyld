/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:55:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class IKComposer, IKImageBackgroundLayer, IKImageLayer;

@interface IKImageViewPrivateData : NSObject {

	IKComposer* _composer;
	IKImageBackgroundLayer* _backgroundLayer;
	IKImageLayer* _imageLayer;
	id _delegate;
	id _trackedView;
	char _initialized;
	char _initalizedWithCoder;
	char _doubleClickOpensEditPanel;
	char _editable;
	char _embedded;
	char _selected;
	char _autoresizes;
	char _supportsDragAndDrop;
	char _needsToReplaceClipView;
	char _isInInterfaceBuilderApp;
	char _isInInterfaceBuilderSimulator;

}

@property (assign) IKComposer * composer;                                 //@synthesize composer=_composer - In the implementation block
@property (assign) IKImageBackgroundLayer * backgroundLayer;              //@synthesize backgroundLayer=_backgroundLayer - In the implementation block
@property (assign) IKImageLayer * imageLayer;                             //@synthesize imageLayer=_imageLayer - In the implementation block
@property (assign) id delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (assign) id trackedView;                                        //@synthesize trackedView=_trackedView - In the implementation block
@property (assign) char initialized;                                      //@synthesize initialized=_initialized - In the implementation block
@property (assign) char initalizedWithCoder;                              //@synthesize initalizedWithCoder=_initalizedWithCoder - In the implementation block
@property (assign) char doubleClickOpensEditPanel;                        //@synthesize doubleClickOpensEditPanel=_doubleClickOpensEditPanel - In the implementation block
@property (assign) char editable;                                         //@synthesize editable=_editable - In the implementation block
@property (assign) char embedded;                                         //@synthesize embedded=_embedded - In the implementation block
@property (assign) char selected;                                         //@synthesize selected=_selected - In the implementation block
@property (assign) char autoresizes;                                      //@synthesize autoresizes=_autoresizes - In the implementation block
@property (assign) char supportsDragAndDrop;                              //@synthesize supportsDragAndDrop=_supportsDragAndDrop - In the implementation block
@property (assign) char needsToReplaceClipView;                           //@synthesize needsToReplaceClipView=_needsToReplaceClipView - In the implementation block
@property (assign) char isInInterfaceBuilderApp;                          //@synthesize isInInterfaceBuilderApp=_isInInterfaceBuilderApp - In the implementation block
@property (assign) char isInInterfaceBuilderSimulator;                    //@synthesize isInInterfaceBuilderSimulator=_isInInterfaceBuilderSimulator - In the implementation block
-(char)selected;
-(IKComposer *)composer;
-(IKImageLayer *)imageLayer;
-(char)autoresizes;
-(void)setComposer:(IKComposer *)arg1 ;
-(IKImageBackgroundLayer *)backgroundLayer;
-(void)setBackgroundLayer:(IKImageBackgroundLayer *)arg1 ;
-(void)setImageLayer:(IKImageLayer *)arg1 ;
-(id)trackedView;
-(void)setTrackedView:(id)arg1 ;
-(char)initialized;
-(void)setInitialized:(char)arg1 ;
-(char)initalizedWithCoder;
-(void)setInitalizedWithCoder:(char)arg1 ;
-(char)doubleClickOpensEditPanel;
-(void)setDoubleClickOpensEditPanel:(char)arg1 ;
-(char)editable;
-(char)embedded;
-(void)setEmbedded:(char)arg1 ;
-(void)setAutoresizes:(char)arg1 ;
-(char)supportsDragAndDrop;
-(void)setSupportsDragAndDrop:(char)arg1 ;
-(char)needsToReplaceClipView;
-(void)setNeedsToReplaceClipView:(char)arg1 ;
-(char)isInInterfaceBuilderApp;
-(void)setIsInInterfaceBuilderApp:(char)arg1 ;
-(char)isInInterfaceBuilderSimulator;
-(void)setIsInInterfaceBuilderSimulator:(char)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setEditable:(char)arg1 ;
-(void)setSelected:(char)arg1 ;
@end

