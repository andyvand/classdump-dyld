/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:08:50 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Library/Frameworks/iTunesLibrary.framework/Versions/A/iTunesLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iTunesLibrary/iTunesLibrary-Structs.h>
@interface ITLibDBParser : NSObject {

	ITLibDBParserImpl* _impl;

}

@property (assign,nonatomic) char parseMediaItemLocation; 
-(char)parseMediaItemLocation;
-(void)setParseMediaItemLocation:(char)arg1 ;
-(id)parseFromDatabase:(id)arg1 parentalPrefs:(ITParentalPrefs*)arg2 ;
-(id)init;
-(void)dealloc;
@end

