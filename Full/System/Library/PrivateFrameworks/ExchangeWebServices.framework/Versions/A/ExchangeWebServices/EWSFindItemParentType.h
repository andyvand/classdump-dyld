/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:22 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ExchangeWebServices.framework/Versions/A/ExchangeWebServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface EWSFindItemParentType : NSObject {

	NSArray* _Items;
	long long _IndexedPagingOffset;
	long long _NumeratorOffset;
	long long _AbsoluteDenominator;
	long long _TotalItemsInView;
	char _IncludesLastItemInRange;

}

@property (nonatomic,copy) NSArray * Items;                              //@synthesize Items=_Items - In the implementation block
@property (assign,nonatomic) long long IndexedPagingOffset;              //@synthesize IndexedPagingOffset=_IndexedPagingOffset - In the implementation block
@property (assign,nonatomic) long long NumeratorOffset;                  //@synthesize NumeratorOffset=_NumeratorOffset - In the implementation block
@property (assign,nonatomic) long long AbsoluteDenominator;              //@synthesize AbsoluteDenominator=_AbsoluteDenominator - In the implementation block
@property (assign,nonatomic) char IncludesLastItemInRange;               //@synthesize IncludesLastItemInRange=_IncludesLastItemInRange - In the implementation block
@property (assign,nonatomic) long long TotalItemsInView;                 //@synthesize TotalItemsInView=_TotalItemsInView - In the implementation block
+(id)definition;
-(void)setItems:(NSArray *)arg1 ;
-(long long)IndexedPagingOffset;
-(void)setIndexedPagingOffset:(long long)arg1 ;
-(long long)NumeratorOffset;
-(void)setNumeratorOffset:(long long)arg1 ;
-(long long)AbsoluteDenominator;
-(void)setAbsoluteDenominator:(long long)arg1 ;
-(void)setTotalItemsInView:(long long)arg1 ;
-(long long)TotalItemsInView;
-(void)setIncludesLastItemInRange:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(char)IncludesLastItemInRange;
-(NSArray *)Items;
@end

