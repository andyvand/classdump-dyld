/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAMPMediaEntity.h>

@class NSString, SACalendar, SAMPPlaybackInfo, SAMPReleaseInfo;

@interface SAMPMediaItem : SAMPMediaEntity

@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * composer; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,retain) SACalendar * dateAdded; 
@property (assign,nonatomic) long long playCount; 
@property (nonatomic,retain) SACalendar * datePurchased; 
@property (assign,nonatomic) long long rating; 
@property (nonatomic,copy) NSString * genre; 
@property (nonatomic,retain) SAMPPlaybackInfo * playbackInfo; 
@property (nonatomic,retain) SAMPReleaseInfo * releaseInfo; 
@property (assign,nonatomic) long long trackNumber; 
@property (nonatomic,copy) NSString * sortAlbum; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)mediaItem;
+(id)mediaItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)genre;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)album;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)sortAlbum;
-(void)setSortAlbum:(NSString *)arg1 ;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
-(long long)trackNumber;
-(void)setTrackNumber:(long long)arg1 ;
-(SACalendar *)dateAdded;
-(void)setDateAdded:(SACalendar *)arg1 ;
-(long long)rating;
-(void)setReleaseInfo:(SAMPReleaseInfo *)arg1 ;
-(SAMPReleaseInfo *)releaseInfo;
-(void)setRating:(long long)arg1 ;
-(NSString *)composer;
-(void)setComposer:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(SACalendar *)datePurchased;
-(void)setDatePurchased:(SACalendar *)arg1 ;
-(long long)playCount;
-(void)setPlayCount:(long long)arg1 ;
-(SAMPPlaybackInfo *)playbackInfo;
-(void)setPlaybackInfo:(SAMPPlaybackInfo *)arg1 ;
-(id)groupIdentifier;
@end

