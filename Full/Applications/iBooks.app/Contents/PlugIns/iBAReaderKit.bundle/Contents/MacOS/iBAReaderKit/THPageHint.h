/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:09 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iBAReaderKit/iBAReaderKit-Structs.h>
@class TSUIntegerKeyDictionary;

@interface THPageHint : NSObject {

	TSUIntegerKeyDictionary* mBodyHints;
	unsigned long long mBodyCount;
	unsigned long long mNonEmptyBodyCount;
	CGSize mSize;
	SCD_Struct_TH15 mBodylessStubHint;
	TSWPTopicNumberHints* _topicNumbers;

}

@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) unsigned long long bodyCount; 
@property (assign,nonatomic) unsigned long long nonEmptyBodyCount; 
@property (assign,nonatomic) SCD_Struct_TH22 bodylessStubHint; 
@property (assign,nonatomic) TSWPTopicNumberHints* topicNumbers;                //@synthesize topicNumbers=_topicNumbers - In the implementation block
@property (nonatomic,readonly) NSRange range; 
-(SCD_Struct_TH22)bodylessStubHint;
-(CGSize)sizeForBodyIndex:(unsigned long long)arg1 ;
-(SCD_Struct_TH22*)lastHint;
-(id)p_bodyHintAtIndex:(unsigned long long)arg1 ;
-(id)firstColumnForBodyIndex:(unsigned long long)arg1 ;
-(id)lastColumnForBodyIndex:(unsigned long long)arg1 ;
-(id)firstChildHintForBodyIndex:(unsigned long long)arg1 ;
-(id)lastChildHintForBodyIndex:(unsigned long long)arg1 ;
-(SCD_Struct_TH22*)firstHintForBodyIndex:(unsigned long long)arg1 ;
-(SCD_Struct_TH22*)lastHintForBodyIndex:(unsigned long long)arg1 ;
-(void)setBodyCount:(unsigned long long)arg1 ;
-(NSRange)rangeForBodyIndex:(unsigned long long)arg1 ;
-(NSRange)anchoredRangeForBodyIndex:(unsigned long long)arg1 ;
-(void)offsetStartCharIndicesBy:(long long)arg1 ;
-(id)initWithPageInfo:(id)arg1 ;
-(void)setAnchoredAttachmentPositions:(id)arg1 forBodyIndex:(unsigned long long)arg2 ;
-(void)setHints:(const vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >*)arg1 forBodyIndex:(unsigned long long)arg2 ;
-(void)setFirstChildHint:(id)arg1 forBodyIndex:(unsigned long long)arg2 ;
-(void)setLastChildHint:(id)arg1 forBodyIndex:(unsigned long long)arg2 ;
-(void)setNonEmptyBodyCount:(unsigned long long)arg1 ;
-(void)setBodylessStubHint:(SCD_Struct_TH22)arg1 ;
-(void)setTopicNumbers:(TSWPTopicNumberHints*)arg1 ;
-(void)setSize:(CGSize)arg1 forBodyIndex:(unsigned long long)arg2 ;
-(unsigned long long)nonEmptyBodyCount;
-(id)anchoredAttachmentPositionsForBodyChildAtIndex:(unsigned long long)arg1 ;
-(vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >*)hintsForBodyIndex:(unsigned long long)arg1 ;
-(unsigned long long)bodyCount;
-(TSWPTopicNumberHints*)topicNumbers;
-(id)firstChildHint;
-(SCD_Struct_TH22*)firstHint;
-(id)lastChildHint;
-(id)firstColumn;
-(void)dealloc;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(id)lastColumn;
-(NSRange)range;
@end
