/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudDocsDaemon/NSCopying.h>

@class NSString, NSData;

@interface BRFieldPkgItem : PBCodable <NSCopying> {

	long long _mtime;
	NSString* _path;
	NSData* _quarantineInfo;
	NSData* _signature;
	NSString* _symlinkContent;
	int _type;
	char _isExecutable;
	char _isWritable;
	SCD_Struct_BR9 _has;

}

@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) char hasPath; 
@property (nonatomic,retain) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) char hasMtime; 
@property (assign,nonatomic) long long mtime;                        //@synthesize mtime=_mtime - In the implementation block
@property (assign,nonatomic) char hasIsWritable; 
@property (assign,nonatomic) char isWritable;                        //@synthesize isWritable=_isWritable - In the implementation block
@property (assign,nonatomic) char hasIsExecutable; 
@property (assign,nonatomic) char isExecutable;                      //@synthesize isExecutable=_isExecutable - In the implementation block
@property (nonatomic,readonly) char hasSymlinkContent; 
@property (nonatomic,retain) NSString * symlinkContent;              //@synthesize symlinkContent=_symlinkContent - In the implementation block
@property (nonatomic,readonly) char hasQuarantineInfo; 
@property (nonatomic,retain) NSData * quarantineInfo;                //@synthesize quarantineInfo=_quarantineInfo - In the implementation block
@property (nonatomic,readonly) char hasSignature; 
@property (nonatomic,retain) NSData * signature;                     //@synthesize signature=_signature - In the implementation block
-(void)setMtime:(long long)arg1 ;
-(NSData *)quarantineInfo;
-(void)setQuarantineInfo:(NSData *)arg1 ;
-(void)setSymlinkContent:(NSString *)arg1 ;
-(char)hasPath;
-(void)setHasMtime:(char)arg1 ;
-(char)hasMtime;
-(void)setHasIsWritable:(char)arg1 ;
-(char)hasIsWritable;
-(void)setIsExecutable:(char)arg1 ;
-(void)setHasIsExecutable:(char)arg1 ;
-(char)hasIsExecutable;
-(char)hasSymlinkContent;
-(char)hasQuarantineInfo;
-(char)hasSignature;
-(NSString *)symlinkContent;
-(void)updateWithPkgItem:(id)arg1 ;
-(id)initWithPkgItem:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(long long)mtime;
-(char)isExecutable;
-(id)description;
-(NSString *)path;
-(void)clear;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setPath:(NSString *)arg1 ;
-(void)setType:(int)arg1 ;
-(id)dictionaryRepresentation;
-(NSData *)signature;
-(void)setSignature:(NSData *)arg1 ;
-(char)isWritable;
-(void)setIsWritable:(char)arg1 ;
@end

