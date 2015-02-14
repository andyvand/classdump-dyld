/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)addCompleted;
+(id)addCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSArray *)stockReferences;
-(void)setStockReferences:(NSArray *)arg1 ;
-(NSArray *)stocks;
-(void)setStocks:(NSArray *)arg1 ;
-(SAStockObject *)aceStock;
-(void)setAceStock:(SAStockObject *)arg1 ;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(id)groupIdentifier;
@end

