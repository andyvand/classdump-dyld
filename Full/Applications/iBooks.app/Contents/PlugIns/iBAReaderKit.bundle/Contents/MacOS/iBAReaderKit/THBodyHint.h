/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/iBAReaderKit-Structs.h>
#import <iBAReaderKit/TSWPOffscreenColumn.h>

@protocol TSDHint;
@class NSDictionary, NSString;

@interface THBodyHint : NSObject <TSWPOffscreenColumn> {

	NSDictionary* mAnchoredAttachmentPositions;
	CGSize mSize;
	id<TSDHint> mFirstChildHint;
	id<TSDHint> mLastChildHint;
	vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >* mHints;

}

@property (nonatomic,readonly) id<TSWPOffscreenColumn> firstColumn; 
@property (nonatomic,readonly) id<TSWPOffscreenColumn> lastColumn; 
@property (nonatomic,readonly) SCD_Struct_TH22* firstHint; 
@property (nonatomic,readonly) SCD_Struct_TH22* lastHint; 
@property (nonatomic,retain) id<TSDHint> firstChildHint; 
@property (nonatomic,retain) id<TSDHint> lastChildHint; 
@property (assign,nonatomic) CGSize size; 
@property (nonatomic,copy) NSDictionary * anchoredAttachmentPositions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long startCharIndex; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) unsigned long long startAnchoredCharIndex; 
@property (nonatomic,readonly) NSRange anchoredRange; 
@property (nonatomic,readonly) unsigned long long nextWidowPullsDownFromCharIndex; 
-(unsigned long long)startCharIndex;
-(void)setFirstChildHint:(id<TSDHint>)arg1 ;
-(void)offsetStartCharIndexBy:(long long)arg1 ;
-(void)setAnchoredAttachmentPositions:(NSDictionary *)arg1 ;
-(NSDictionary *)anchoredAttachmentPositions;
-(void)setLastChildHint:(id<TSDHint>)arg1 ;
-(SCD_Struct_TH22*)lastHint;
-(id<TSDHint>)firstChildHint;
-(id<TSDHint>)lastChildHint;
-(SCD_Struct_TH22*)firstHint;
-(NSRange)anchoredRange;
-(void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeAutoNumberFootnoteCount:(unsigned long long)arg3 ;
-(unsigned long long)nextWidowPullsDownFromCharIndex;
-(unsigned long long)startAnchoredCharIndex;
-(vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >*)hints;
-(void)setHints:(const vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >*)arg1 ;
-(id<TSWPOffscreenColumn>)firstColumn;
-(void)dealloc;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id<TSWPOffscreenColumn>)lastColumn;
-(NSRange)range;
@end

