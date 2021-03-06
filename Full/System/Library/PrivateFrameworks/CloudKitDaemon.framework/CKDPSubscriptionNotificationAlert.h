/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:37 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, NSMutableArray;

@interface CKDPSubscriptionNotificationAlert : PBCodable <NSCopying> {

	NSString* _actionLocKey;
	NSString* _launchImage;
	NSMutableArray* _localizedArguments;
	NSString* _localizedKey;
	NSString* _soundName;
	NSString* _text;

}

@property (nonatomic,readonly) char hasText; 
@property (nonatomic,retain) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) char hasLocalizedKey; 
@property (nonatomic,retain) NSString * localizedKey;                          //@synthesize localizedKey=_localizedKey - In the implementation block
@property (nonatomic,retain) NSMutableArray * localizedArguments;              //@synthesize localizedArguments=_localizedArguments - In the implementation block
@property (nonatomic,readonly) char hasActionLocKey; 
@property (nonatomic,retain) NSString * actionLocKey;                          //@synthesize actionLocKey=_actionLocKey - In the implementation block
@property (nonatomic,readonly) char hasLaunchImage; 
@property (nonatomic,retain) NSString * launchImage;                           //@synthesize launchImage=_launchImage - In the implementation block
@property (nonatomic,readonly) char hasSoundName; 
@property (nonatomic,retain) NSString * soundName;                             //@synthesize soundName=_soundName - In the implementation block
-(void)addLocalizedArguments:(id)arg1 ;
-(unsigned long long)localizedArgumentsCount;
-(void)clearLocalizedArguments;
-(id)localizedArgumentsAtIndex:(unsigned long long)arg1 ;
-(void)setActionLocKey:(NSString *)arg1 ;
-(void)setLaunchImage:(NSString *)arg1 ;
-(char)hasLocalizedKey;
-(char)hasActionLocKey;
-(char)hasLaunchImage;
-(char)hasSoundName;
-(NSMutableArray *)localizedArguments;
-(void)setLocalizedArguments:(NSMutableArray *)arg1 ;
-(NSString *)actionLocKey;
-(NSString *)launchImage;
-(void)setText:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)text;
-(void)setLocalizedKey:(NSString *)arg1 ;
-(NSString *)localizedKey;
-(NSString *)soundName;
-(void)setSoundName:(NSString *)arg1 ;
-(char)hasText;
@end

