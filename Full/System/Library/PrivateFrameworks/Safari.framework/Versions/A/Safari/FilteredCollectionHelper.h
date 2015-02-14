/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSSet;

@interface FilteredCollectionHelper : NSObject {

	NSArray* _fullCollection;
	NSArray* _filteredCollection;
	NSSet* _filteredSet;

}

@property (nonatomic,copy) NSArray * fullCollection;                  //@synthesize fullCollection=_fullCollection - In the implementation block
@property (nonatomic,copy) NSArray * filteredCollection;              //@synthesize filteredCollection=_filteredCollection - In the implementation block
-(id)filteredItemFollowingItem:(id)arg1 ;
-(id)filteredItemPrecedingItem:(id)arg1 ;
-(void)setFilteredCollection:(NSArray *)arg1 ;
-(void)setFullCollection:(NSArray *)arg1 ;
-(NSArray *)fullCollection;
-(id)_filteredSet;
-(NSArray *)filteredCollection;
@end

