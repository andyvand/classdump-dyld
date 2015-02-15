/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/TSWPOffscreenColumn.h>

@protocol THPageController;
@class NSString;

@interface THVisibleColumnProxy : NSObject <TSWPOffscreenColumn> {

	unsigned long long mPageIndex;
	id<THPageController> mPageController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long startCharIndex; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) unsigned long long startAnchoredCharIndex; 
@property (nonatomic,readonly) NSRange anchoredRange; 
@property (nonatomic,readonly) unsigned long long nextWidowPullsDownFromCharIndex; 
-(NSRange)anchoredRange;
-(unsigned long long)nextWidowPullsDownFromCharIndex;
-(unsigned long long)startAnchoredCharIndex;
-(unsigned long long)startCharIndex;
-(void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeAutoNumberFootnoteCount:(unsigned long long)arg3 ;
-(id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2 ;
-(const SCD_Struct_TH22*)p_targetFirstHint;
-(const SCD_Struct_TH22*)p_targetLastHint;
-(void)dealloc;
-(NSRange)range;
@end
