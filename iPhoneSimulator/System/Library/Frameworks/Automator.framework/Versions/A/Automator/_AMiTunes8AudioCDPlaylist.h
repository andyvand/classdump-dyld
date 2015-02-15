/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:55 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Automator/_AMiTunes8Playlist.h>

@class NSString;

@interface _AMiTunes8AudioCDPlaylist : _AMiTunes8Playlist

@property (copy) NSString * artist; 
@property (assign) char compilation; 
@property (copy) NSString * composer; 
@property (assign) long long discCount; 
@property (assign) long long discNumber; 
@property (copy) NSString * genre; 
@property (assign) long long year; 
-(id)audioCDTracks;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
-(char)compilation;
-(void)setCompilation:(char)arg1 ;
-(long long)discCount;
-(void)setDiscCount:(long long)arg1 ;
-(long long)discNumber;
-(void)setDiscNumber:(long long)arg1 ;
-(NSString *)genre;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)composer;
-(void)setComposer:(NSString *)arg1 ;
-(long long)year;
-(void)setYear:(long long)arg1 ;
@end

