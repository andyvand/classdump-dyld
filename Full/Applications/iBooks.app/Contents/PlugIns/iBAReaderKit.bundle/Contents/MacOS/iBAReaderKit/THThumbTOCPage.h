/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBAReaderKit/iBAReaderKit-Structs.h>
@class CALayer, CATextLayer, NSString;

@interface THThumbTOCPage : NSObject {

	CGSize _layerSize;
	CALayer* _pageNumberBadge;
	CALayer* _bookmarkBadge;
	CATextLayer* _numberLayer;
	char _isLoading;
	char _wantsContainer;
	id _pageThumbImageProvider;
	CALayer* _pageLayer;
	CALayer* _containerLayer;
	NSString* _pageNumberString;
	long long _absolutePageIndex;

}

@property (nonatomic,retain) id pageThumbImageProvider;                //@synthesize pageThumbImageProvider=_pageThumbImageProvider - In the implementation block
@property (nonatomic,retain) CALayer * pageLayer;                      //@synthesize pageLayer=_pageLayer - In the implementation block
@property (nonatomic,retain) CALayer * containerLayer;                 //@synthesize containerLayer=_containerLayer - In the implementation block
@property (nonatomic,copy) NSString * pageNumberString;                //@synthesize pageNumberString=_pageNumberString - In the implementation block
@property (assign,nonatomic) long long absolutePageIndex;              //@synthesize absolutePageIndex=_absolutePageIndex - In the implementation block
@property (assign) char isLoading;                                     //@synthesize isLoading=_isLoading - In the implementation block
@property (assign) char wantsContainer;                                //@synthesize wantsContainer=_wantsContainer - In the implementation block
-(CALayer *)containerLayer;
-(void)setContainerLayer:(CALayer *)arg1 ;
-(void)p_addBookmarkBadge;
-(NSString *)pageNumberString;
-(void)setAbsolutePageIndex:(long long)arg1 ;
-(void)addBookmarkBadge;
-(void)removeBookmarkBadge;
-(void)setPageNumberString:(NSString *)arg1 ;
-(id)initWithSize:(CGSize)arg1 wantsContainer:(char)arg2 ;
-(long long)absolutePageIndex;
-(void)setPageThumbImageProvider:(id)arg1 ;
-(void)removePageNumberBadge;
-(void)unloadThumb;
-(void)adaptToView:(id)arg1 ;
-(CALayer *)pageLayer;
-(void)setPageLayer:(CALayer *)arg1 ;
-(char)wantsContainer;
-(void)loadThumb;
-(void)loadThumbWithQueue:(id)arg1 ;
-(void)setWantsContainer:(char)arg1 ;
-(id)pageThumbImageProvider;
-(void)addPageNumberBadgeHighlighted:(char)arg1 parentView:(id)arg2 ;
-(char)isLoading;
-(void)setIsLoading:(char)arg1 ;
-(void)preload;
-(void)dealloc;
@end

