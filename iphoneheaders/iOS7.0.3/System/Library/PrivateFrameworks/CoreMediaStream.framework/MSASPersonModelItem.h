/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:30:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol NSObject;
@class MSASAlbum, NSString, ;

@interface MSASPersonModelItem : NSObject <NSCopying> {

	int _errorCount;
	MSASAlbum* _album;
	NSString* _albumGUID;
	<NSObject>* _object;

}

@property (assign,nonatomic) int errorCount;                    //@synthesize errorCount=_errorCount - In the implementation block
@property (nonatomic,retain) MSASAlbum * album;                 //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * albumGUID;              //@synthesize albumGUID=_albumGUID - In the implementation block
@property (nonatomic,retain) <NSObject> * object;               //@synthesize object=_object - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(int)errorCount;
-(void)setErrorCount:(int)arg1 ;
-(id)album;
-(void)setAlbum:(id)arg1 ;
-(id)albumGUID;
-(void)setAlbumGUID:(id)arg1 ;
-(void).cxx_destruct;
@end
