/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:02:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@interface NSUnarchiver : NSCoder {

	void* datax;
	unsigned long long cursor;
	NSZone* objectZone;
	unsigned long long systemVersion;
	char streamerVersion;
	char swap;
	char unused1;
	char unused2;
	void* pointerTable;
	void* stringTable;
	id classVersions;
	long long lastLabel;
	void* map;
	void* allUnarchivedObjects;
	id reserved;

}

@property (getter=isAtEnd,readonly) char atEnd; 
@property (readonly) unsigned systemVersion; 
+(void)initialize;
+(id)unarchiveObjectWithData:(id)arg1 ;
+(void)decodeClassName:(id)arg1 asClassName:(id)arg2 ;
+(id)unarchiveObjectWithFile:(id)arg1 ;
+(id)classNameDecodedForArchiveClassName:(id)arg1 ;
-(void)_setAllowedClasses:(id)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)initForReadingWithData:(id)arg1 ;
-(id)decodeObject;
-(long long)versionForClassName:(id)arg1 ;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(char)isAtEnd;
-(id)data;
-(void)decodeClassName:(id)arg1 asClassName:(id)arg2 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(id)decodeDataObject;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(id)decodePropertyList;
-(unsigned)systemVersion;
-(NSZone*)objectZone;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(id)classNameDecodedForArchiveClassName:(id)arg1 ;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(void)setObjectZone:(NSZone*)arg1 ;
@end

