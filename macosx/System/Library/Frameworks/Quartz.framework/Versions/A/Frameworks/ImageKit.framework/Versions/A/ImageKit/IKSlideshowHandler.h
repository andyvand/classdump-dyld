/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <ImageKit/NSWindowDelegate.h>

@class IKSlideshowDataSourceHandler, IKSSBackgroundWindow, IKSlideshow, IKSlideshowElement, IKSSPanel, IKSSIndexHandler, IKSlideshowAudioPlayer, NSString, NSOperationQueue, NSScreen, NSMutableArray;

@interface IKSlideshowHandler : NSObject <NSWindowDelegate> {

	IKSlideshowDataSourceHandler* _dataSourceHandler;
	IKSSBackgroundWindow* _backgroundWindow;
	double _autoPlayDelay;
	double _autoPlayTransitionTime;
	IKSlideshow* _slideshow;
	unsigned long long _itemCount;
	long long _currentIndex;
	char _slideshowIsRunning;
	char _autoPlaying;
	char _autoPlayWrapAround;
	IKSlideshowElement* _itemList;
	long long _itemArraySize;
	IKSlideshowElement* _currentItem;
	IKSSPanel* _panel;
	IKSSIndexHandler* _indexHandler;
	IKSlideshowAudioPlayer* _audioPlayer;
	NSString* _audioFile;
	NSOperationQueue* _operationQueue;
	unsigned _sToken;
	NSString* _mode;
	NSScreen* _slideshowScreen;
	CGRect _slideshowScreenRectWhenLaunched;
	NSMutableArray* _otherScreens;
	long long _pdfDisplayBox;
	long long _pdfDisplayMode;
	char _pdfDisplayAsBook;
	long long _pageIncrement;

}

@property (assign) double autoPlayDelay;                            //@synthesize autoPlayDelay=_autoPlayDelay - In the implementation block
@property (assign) long long itemArraySize;                         //@synthesize itemArraySize=_itemArraySize - In the implementation block
@property (assign) long long currentIndex;                          //@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign) unsigned long long itemCount;                    //@synthesize itemCount=_itemCount - In the implementation block
@property (readonly) char slideshowIsRunning;                       //@synthesize slideshowIsRunning=_slideshowIsRunning - In the implementation block
@property (assign) char autoPlaying;                                //@synthesize autoPlaying=_autoPlaying - In the implementation block
@property (assign) char autoPlayWrapAround;                         //@synthesize autoPlayWrapAround=_autoPlayWrapAround - In the implementation block
@property (readonly) IKSlideshowElement * currentItem;              //@synthesize currentItem=_currentItem - In the implementation block
@property (copy) NSString * audioFile;                              //@synthesize audioFile=_audioFile - In the implementation block
@property (assign) long long pdfDisplayBox;                         //@synthesize pdfDisplayBox=_pdfDisplayBox - In the implementation block
@property (assign) long long pdfDisplayMode;                        //@synthesize pdfDisplayMode=_pdfDisplayMode - In the implementation block
@property (assign) char pdfDisplayAsBook;                           //@synthesize pdfDisplayAsBook=_pdfDisplayAsBook - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedSlideshowHandler;
-(void)applicationDidChangeScreenParameters:(id)arg1 ;
-(void)loadItem:(id)arg1 ;
-(IKSlideshowElement *)currentItem;
-(long long)currentIndex;
-(void)setCurrentIndex:(long long)arg1 ;
-(void)rotateLeft;
-(void)rotateRight;
-(void)closeDown;
-(char)slideshowIsRunning;
-(void)runWithSlideshow:(id)arg1 dataSource:(id)arg2 inMode:(id)arg3 options:(id)arg4 ;
-(void)doStopSlideshow:(id)arg1 ;
-(void)reloadSlideshowItemAtIndex:(unsigned long long)arg1 ;
-(double)autoPlayDelay;
-(void)setAutoPlayDelay:(double)arg1 ;
-(void)stopSlideshow:(id)arg1 ;
-(void)setItemArraySize:(long long)arg1 ;
-(void)appWillBecomeActive:(id)arg1 ;
-(void)appWillResignActive:(id)arg1 ;
-(void)appWillHide:(id)arg1 ;
-(void)appWillUnhide:(id)arg1 ;
-(void)freeItems;
-(CGAffineTransform)transformFromRect:(const CGRect*)arg1 windowWidth:(float)arg2 windowHeight:(float)arg3 ;
-(void)fadeFromNormalToBlack:(float)arg1 wait:(char)arg2 ;
-(CGRect)slideshowScreenRect;
-(long long)pdfDisplayMode;
-(long long)pdfDisplayBox;
-(char)pdfDisplayAsBook;
-(void)installOtherScreensBackground;
-(void)fadeFromBlackToNormal:(float)arg1 wait:(char)arg2 ;
-(void)releaseFadeReservation;
-(void)removeOtherScreensBackground;
-(void)setItemCount:(unsigned long long)arg1 ;
-(long long)itemArraySize;
-(unsigned long long)indexForItem:(id)arg1 ;
-(void)thumbnailDidLoad:(id)arg1 currentCount:(unsigned long long)arg2 ;
-(char)shouldLoad:(id)arg1 ;
-(void)unloadFarNeighborsOfItem:(id)arg1 ;
-(void)loadNeighborsOfItem:(id)arg1 direction:(int)arg2 ;
-(void)makeCurrentItem:(id)arg1 ;
-(void)gotoIndex:(unsigned long long)arg1 transitionTime:(double)arg2 direction:(int)arg3 ;
-(NSString *)audioFile;
-(void)setAutoPlaying:(char)arg1 ;
-(void)startPlayAudio;
-(void)stopPlayAudio;
-(void)stopAutoPlay;
-(void)startAutoPlay;
-(char)autoPlayWrapAround;
-(void)gotoPrevious;
-(void)gotoNext;
-(void)setAudioFile:(NSString *)arg1 ;
-(void)setPdfDisplayBox:(long long)arg1 ;
-(void)setPdfDisplayMode:(long long)arg1 ;
-(void)setPdfDisplayAsBook:(char)arg1 ;
-(void)goFullScreen:(id)arg1 ;
-(void)updateItemCount;
-(void)itemCountChanged;
-(void)setAutoPlayWrapAround:(char)arg1 ;
-(void)createPanel:(id)arg1 ;
-(void)leaveFullScreen:(id)arg1 ;
-(void)exportMarkedItems;
-(void)itemWasRotated:(id)arg1 ;
-(void)gotoFirst;
-(void)gotoLast;
-(id)slideshowScreen;
-(id)pdfView;
-(void)addSibling:(id)arg1 forItem:(id)arg2 ;
-(void)thumbnailDidLoad:(id)arg1 ;
-(void)imageDidLoad:(id)arg1 ;
-(void)pdfDidLoad:(id)arg1 ;
-(void)qlDidLoad:(id)arg1 ;
-(void)loadThumbnailForElement:(id)arg1 currentCount:(unsigned long long)arg2 ;
-(void)toggleAutoPlay:(id)arg1 ;
-(void)makePanelFadeOut;
-(void)switchToActualSize;
-(void)switchToFullScreen;
-(void)switchToIndexMode;
-(void)switchToSingleMode:(unsigned long long)arg1 ;
-(void)slideshowToggleExportToiPhoto;
-(char)handleKeyCode:(unsigned short)arg1 ;
-(void)debugState;
-(char)autoPlaying;
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)itemAtIndex:(unsigned long long)arg1 ;
-(void)reloadData;
-(void)magnifyWithEvent:(id)arg1 ;
-(id)panel;
-(void)swipeWithEvent:(id)arg1 ;
-(double)userSpaceScaleFactor;
-(unsigned long long)itemCount;
-(void)play:(id)arg1 ;
-(void)cleanup;
@end

