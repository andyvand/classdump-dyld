/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:33 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/Versions/A/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSArray, NSString, SALocalSearchBusiness2;

@interface SAMovieV2MovieListSnippet : SAUISnippet

@property (nonatomic,copy) NSArray * movieListCells; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
@property (nonatomic,copy) NSString * title; 
+(id)movieListSnippet;
+(id)movieListSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(SALocalSearchBusiness2 *)theater;
-(void)setTheater:(SALocalSearchBusiness2 *)arg1 ;
-(NSArray *)movieListCells;
-(void)setMovieListCells:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(id)groupIdentifier;
@end

