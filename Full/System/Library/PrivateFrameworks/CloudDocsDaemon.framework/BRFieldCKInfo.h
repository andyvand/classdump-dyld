/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 3:34:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudDocsDaemon/PQLBindable.h>
#import <CloudDocsDaemon/PQLResultSetInitializer.h>
#import <CloudDocsDaemon/NSCopying.h>

@class NSString;

@interface BRFieldCKInfo : PBCodable <PQLBindable, PQLResultSetInitializer, NSCopying> {

	NSString* _etag;
	char _knownToServer;
	char _wasCached;
	SCD_Struct_BR2 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) char hasKnownToServer; 
@property (assign,nonatomic) char knownToServer;                    //@synthesize knownToServer=_knownToServer - In the implementation block
@property (assign,nonatomic) char hasWasCached; 
@property (assign,nonatomic) char wasCached;                        //@synthesize wasCached=_wasCached - In the implementation block
@property (nonatomic,readonly) char hasEtag; 
@property (nonatomic,retain) NSString * etag;                       //@synthesize etag=_etag - In the implementation block
-(void)setHasKnownToServer:(char)arg1 ;
-(char)hasKnownToServer;
-(void)setHasWasCached:(char)arg1 ;
-(char)hasWasCached;
-(char)knownToServer;
-(id)initWithSqlite3Value:(MemRef)arg1 ;
-(void)sqliteBind:(sqlite3_stmtRef)arg1 index:(int)arg2 ;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
-(void)setCKInfoFieldsInRecord:(id)arg1 ;
-(void)setKnownToServer:(char)arg1 ;
-(char)wasCached;
-(void)setWasCached:(char)arg1 ;
-(id)initWithRecord:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasEtag;
-(NSString *)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setEtag:(NSString *)arg1 ;
-(NSString *)etag;
@end

