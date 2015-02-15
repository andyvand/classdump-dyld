/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:58:06 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Users/joris/Desktop/SysDecrypts/64-Bit/Dock
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Dock/Dock-Structs.h>
#import <Dock/ECPagerLayer.h>
#import <Dock/ECEventHandlingDelegate.h>

@protocol OS_dispatch_source;
@class CALayer, ECShadowTextLayer, NSString, ECTextInputLayer, NSObject;

@interface ECSBLayer : ECPagerLayer <ECEventHandlingDelegate> {

	CALayer* _searchBackgroundLayer;
	CALayer* _noResultsContainerLayer;
	ECShadowTextLayer* _noResultsLayer;
	NSString* _searchString;
	ECTextInputLayer* _searchTextInputLayer;
	double _zoomFactor;
	int _zoomStyle;
	float _scaleFactor;
	unsigned long long _numberOfRowsPerPage;
	unsigned long long _numberOfColumnsPerPage;
	NSObject*<OS_dispatch_source> _searchStringTimer;
	NSObject*<OS_dispatch_source> _pageChangeTimer;
	unsigned _searchStringBeingSet : 1;
	unsigned _leftMouseDown : 1;
	unsigned _keyDownHandled : 1;
	unsigned _mouseDragged : 1;

}

@property (nonatomic,readonly) CALayer * searchBackgroundLayer;                      //@synthesize searchBackgroundLayer=_searchBackgroundLayer - In the implementation block
@property (nonatomic,retain) NSString * searchString;                                //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) ECTextInputLayer * searchTextInputLayer;              //@synthesize searchTextInputLayer=_searchTextInputLayer - In the implementation block
@property (nonatomic,readonly) ECShadowTextLayer * noResultsLayer;                   //@synthesize noResultsLayer=_noResultsLayer - In the implementation block
@property (assign,nonatomic) double zoomFactor;                                      //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) int zoomStyle;                                          //@synthesize zoomStyle=_zoomStyle - In the implementation block
@property (nonatomic,readonly) double adjustedLeftMargin; 
@property (nonatomic,readonly) double adjustedRightMargin; 
@property (nonatomic,readonly) double adjustedTopMargin; 
@property (nonatomic,readonly) double adjustedBottomMargin; 
@property (assign,nonatomic) float scaleFactor;                                      //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRowsPerPage;                 //@synthesize numberOfRowsPerPage=_numberOfRowsPerPage - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumnsPerPage;              //@synthesize numberOfColumnsPerPage=_numberOfColumnsPerPage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)calculateIconSize:(unsigned long long*)arg1 miniIconSize:(unsigned long long*)arg2 forBounds:(CGRect)arg3 andScaleFactor:(float)arg4 usingLeftMargin:(double)arg5 rightMargin:(double)arg6 topMargin:(double)arg7 bottomMargin:(double)arg8 zoomStyle:(int)arg9 zoomFactor:(double)arg10 withNumberOfRows:(unsigned long long)arg11 andColumns:(unsigned long long)arg12 ;
-(char)leftMouseDown:(id)arg1 ;
-(char)leftMouseUp:(id)arg1 ;
-(char)leftMouseDragged:(id)arg1 ;
-(char)gesture:(id)arg1 ;
-(char)dragEntered:(id)arg1 ;
-(char)dragExited:(id)arg1 ;
-(void)setScrollValue:(double)arg1 ;
-(char)leftMouseUp:(id)arg1 inLayer:(id)arg2 ;
-(char)leftMouseDown:(id)arg1 inLayer:(id)arg2 ;
-(void)setCurrentPageIndex:(unsigned long long)arg1 ;
-(ECTextInputLayer *)searchTextInputLayer;
-(double)adjustedLeftMargin;
-(double)adjustedRightMargin;
-(double)adjustedTopMargin;
-(double)adjustedBottomMargin;
-(id)initWithPager:(id)arg1 scaleFactor:(float)arg2 ;
-(CALayer *)searchBackgroundLayer;
-(ECShadowTextLayer *)noResultsLayer;
-(unsigned long long)numberOfRowsPerPage;
-(void)setNumberOfRowsPerPage:(unsigned long long)arg1 ;
-(unsigned long long)numberOfColumnsPerPage;
-(void)setNumberOfColumnsPerPage:(unsigned long long)arg1 ;
-(float)scaleFactor;
-(void)setScaleFactor:(float)arg1 ;
-(void)cancelTimers;
-(void)setZoomStyle:(int)arg1 ;
-(int)zoomStyle;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)layout;
-(char)keyDown:(id)arg1 ;
-(char)scrollWheel:(id)arg1 ;
-(char)keyUp:(id)arg1 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
@end
