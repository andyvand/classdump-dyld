/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:56:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/Versions/A/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@class NSArray, DDNonTerminal, DDLocation;

@interface DDProduction : NSObject {

	NSArray* _items;
	DDNonTerminal* _nonTerminal;
	long long _index;
	DDLocation* _location;
	long long* _graphOfWeakNT;
	long long _numberOfDottedProductions;
	_DDDotedProduction* _dottedProductions;

}

@property (assign) long long index;                    //@synthesize index=_index - In the implementation block
@property (retain) DDLocation * location; 
-(void)setIndex:(long long)arg1 ;
-(id)locationFilename;
-(_DDExpressionPosition)locationPosition;
-(id)initWithSymbols:(id)arg1 nonTerminal:(id)arg2 ;
-(id)symbols;
-(id)descriptionWithMarkerPos:(int)arg1 ;
-(long long)numberOfWeakNTBeforeIndex:(long long)arg1 ;
-(void)setSymbols:(id)arg1 ;
-(id)nonTerminal;
-(void)recalculateWeakNTGraphAndDottedProdNumber;
-(long long)numberOfDottedProduction;
-(void)setDottedProductions:(_DDDotedProduction*)arg1 ;
-(_DDDotedProduction*)dottedProductions;
-(char)checkDottedProductionIndex:(long long)arg1 ;
-(id)locationDescription;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)index;
-(DDLocation *)location;
-(void)setLocation:(DDLocation *)arg1 ;
@end

