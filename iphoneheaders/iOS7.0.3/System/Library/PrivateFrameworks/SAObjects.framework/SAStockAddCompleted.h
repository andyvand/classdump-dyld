/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:32:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class SAStockObject, NSURL, NSArray, NSString;

@interface SAStockAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,retain) SAStockObject * aceStock; 
@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSArray * results; 
@property (nonatomic,copy) NSArray * stockReferences; 
@property (nonatomic,copy) NSArray * stocks; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)addCompleted;
+(id)addCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(id)results;
-(void)setResults:(id)arg1 ;
-(id)encodedClassName;
-(id)stockReferences;
-(void)setStockReferences:(id)arg1 ;
-(id)stocks;
-(void)setStocks:(id)arg1 ;
-(id)aceStock;
-(void)setAceStock:(id)arg1 ;
@end
