/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/DiscRecording.framework/Versions/A/DiscRecording
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableArray, NSNumber;

@interface DRCueFileParser : NSObject {

	NSString* cuePath;
	NSMutableDictionary* burnInfo;
	NSMutableArray* trackInfoList;
	NSString* sourceFile;
	NSString* sourceKind;
	NSNumber* sourceLength;
	long long lastTrackIndex;

}
-(id)cdText;
-(id)burnProperties;
-(id)trackLayout;
-(id)extractString:(id)arg1 ;
-(id)fullPathForAuxFile:(id)arg1 ;
-(long long)parseSourceFile:(id)arg1 ;
-(id)trackInfoForIndex:(long long)arg1 ;
-(id)decodeDatatype:(id)arg1 ;
-(void)parsePropertiesData:(id)arg1 trackInfo:(id)arg2 ;
-(void)parseFlags:(id)arg1 trackInfo:(id)arg2 ;
-(void)parseIndexData:(id)arg1 trackInfo:(id)arg2 ;
-(char)parse;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
@end

