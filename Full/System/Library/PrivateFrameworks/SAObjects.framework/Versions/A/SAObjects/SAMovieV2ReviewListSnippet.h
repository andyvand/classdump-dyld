/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSString, NSNumber, NSArray;

@interface SAMovieV2ReviewListSnippet : SAUISnippet

@property (nonatomic,copy) NSString * movieName; 
@property (assign,nonatomic) double qualityRating; 
@property (nonatomic,copy) NSNumber * reviewCount; 
@property (nonatomic,copy) NSArray * reviewListCells; 
@property (nonatomic,copy) NSString * reviewsProvider; 
+(id)reviewListSnippet;
+(id)reviewListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
-(double)qualityRating;
-(void)setQualityRating:(double)arg1 ;
-(NSNumber *)reviewCount;
-(void)setReviewCount:(NSNumber *)arg1 ;
-(NSArray *)reviewListCells;
-(void)setReviewListCells:(NSArray *)arg1 ;
-(NSString *)reviewsProvider;
-(void)setReviewsProvider:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

