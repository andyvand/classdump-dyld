/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:15:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSString, NSArray, SALocalSearchBusiness2;

@interface SAMovieV2ShowtimeSnippet : SAUISnippet

@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,copy) NSArray * showtimes; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
@property (nonatomic,copy) NSString * theaterName; 
+(id)showtimeSnippet;
+(id)showtimeSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
-(NSArray *)showtimes;
-(void)setShowtimes:(NSArray *)arg1 ;
-(SALocalSearchBusiness2 *)theater;
-(void)setTheater:(SALocalSearchBusiness2 *)arg1 ;
-(NSString *)theaterName;
-(void)setTheaterName:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

