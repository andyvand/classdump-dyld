/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSURL, NSNumber, NSString, SALocalSearchReviewList, NSDate;

@interface SAMovieMovie : SADomainObject

@property (nonatomic,copy) NSArray * actors; 
@property (nonatomic,copy) NSArray * directors; 
@property (nonatomic,copy) NSArray * genres; 
@property (nonatomic,copy) NSURL * hiResTrailerUri; 
@property (nonatomic,copy) NSURL * iTunesUri; 
@property (assign,nonatomic) char is3d; 
@property (nonatomic,copy) NSNumber * isAvailableOnItunesForPurchase; 
@property (nonatomic,copy) NSNumber * isAvailableOnItunesForRent; 
@property (nonatomic,copy) NSURL * lowResTrailerUri; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * posterImages; 
@property (nonatomic,copy) NSURL * posterUri; 
@property (nonatomic,copy) NSNumber * qualityRating; 
@property (nonatomic,copy) NSString * rating; 
@property (nonatomic,retain) SALocalSearchReviewList * reviews; 
@property (nonatomic,copy) NSURL * rottenTomatoesUri; 
@property (assign,nonatomic) long long runtimeInMinutes; 
@property (nonatomic,copy) NSArray * studios; 
@property (nonatomic,copy) NSString * synopsis; 
@property (nonatomic,copy) NSString * theaterShowtimeSearchRegionDescription; 
@property (nonatomic,copy) NSArray * theaterShowtimes; 
@property (nonatomic,copy) NSDate * theatricalReleaseDate; 
@property (nonatomic,copy) NSURL * trailerUri; 
+(id)movie;
+(id)movieWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)rating;
-(void)setReviews:(SALocalSearchReviewList *)arg1 ;
-(SALocalSearchReviewList *)reviews;
-(void)setRating:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(NSArray *)posterImages;
-(void)setPosterImages:(NSArray *)arg1 ;
-(NSNumber *)qualityRating;
-(void)setQualityRating:(NSNumber *)arg1 ;
-(NSDate *)theatricalReleaseDate;
-(void)setTheatricalReleaseDate:(NSDate *)arg1 ;
-(NSArray *)actors;
-(void)setActors:(NSArray *)arg1 ;
-(NSArray *)directors;
-(void)setDirectors:(NSArray *)arg1 ;
-(NSArray *)genres;
-(void)setGenres:(NSArray *)arg1 ;
-(NSURL *)hiResTrailerUri;
-(void)setHiResTrailerUri:(NSURL *)arg1 ;
-(NSURL *)iTunesUri;
-(void)setITunesUri:(NSURL *)arg1 ;
-(char)is3d;
-(void)setIs3d:(char)arg1 ;
-(NSNumber *)isAvailableOnItunesForPurchase;
-(void)setIsAvailableOnItunesForPurchase:(NSNumber *)arg1 ;
-(NSNumber *)isAvailableOnItunesForRent;
-(void)setIsAvailableOnItunesForRent:(NSNumber *)arg1 ;
-(NSURL *)lowResTrailerUri;
-(void)setLowResTrailerUri:(NSURL *)arg1 ;
-(NSURL *)posterUri;
-(void)setPosterUri:(NSURL *)arg1 ;
-(NSURL *)rottenTomatoesUri;
-(void)setRottenTomatoesUri:(NSURL *)arg1 ;
-(long long)runtimeInMinutes;
-(void)setRuntimeInMinutes:(long long)arg1 ;
-(NSArray *)studios;
-(void)setStudios:(NSArray *)arg1 ;
-(NSString *)synopsis;
-(void)setSynopsis:(NSString *)arg1 ;
-(NSString *)theaterShowtimeSearchRegionDescription;
-(void)setTheaterShowtimeSearchRegionDescription:(NSString *)arg1 ;
-(NSArray *)theaterShowtimes;
-(void)setTheaterShowtimes:(NSArray *)arg1 ;
-(NSURL *)trailerUri;
-(void)setTrailerUri:(NSURL *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)groupIdentifier;
@end

