/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@interface NSKeyedUnarchiver : NSCoder {

	id _delegate;
	unsigned _flags;
	id _objRefMap;
	id _replacementMap;
	id _nameClassMap;
	id _tmpRefObjMap;
	id _refObjMap;
	int _genericKey;
	id _data;
	void* _offsetData;
	id _containers;
	id _objects;
	const char* _bytes;
	unsigned long long _len;
	id _helper;
	void* _reserved0;

}

@property (assign) id<NSKeyedUnarchiverDelegate> delegate; 
+(id)_mapkit_safeUnarchiveObjectWithData:(id)arg1 ;
+(id)safeUnarchiveObjectWithData:(id)arg1 ;
+(id)dd_secureUnarchiveObjectWithData:(id)arg1 ofClass:(Class)arg2 ;
+(id)_ql_secureUnarchiveObjectWithData:(id)arg1 ;
+(id)unarchiveObjectWithData:(id)arg1 allowedClasses:(id)arg2 ;
+(void)setClass:(Class)arg1 forClassName:(id)arg2 ;
+(void)initialize;
+(id)unarchiveObjectWithData:(id)arg1 ;
+(id)unarchiveObjectWithFile:(id)arg1 ;
+(Class)classForClassName:(id)arg1 ;
-(void)setClass:(Class)arg1 forClassName:(id)arg2 ;
-(id)allowedClasses;
-(id)_decodeArrayOfObjectsForKey:(id)arg1 ;
-(id)_decodePropertyListForKey:(id)arg1 ;
-(void)setAllowedClasses:(id)arg1 ;
-(id)_blobForCurrentObject;
-(id)_initWithStream:(CFReadStreamRef)arg1 data:(id)arg2 topDict:(CFDictionaryRef)arg3 ;
-(void)_temporaryMapReplaceObject:(id)arg1 withObject:(id)arg2 ;
-(id)initWithStream:(id)arg1 ;
-(id)_allowedClassNames;
-(void)_replaceObject:(id)arg1 withObject:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<NSKeyedUnarchiverDelegate>)arg1 ;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(id)initForReadingWithData:(id)arg1 ;
-(void)setRequiresSecureCoding:(char)arg1 ;
-(void)finishDecoding;
-(char)allowsKeyedCoding;
-(id)decodeObjectForKey:(id)arg1 ;
-(id)decodeObject;
-(long long)versionForClassName:(id)arg1 ;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(id<NSKeyedUnarchiverDelegate>)delegate;
-(double)decodeDoubleForKey:(id)arg1 ;
-(void)_setAllowedClassNames:(id)arg1 ;
-(char)decodeBoolForKey:(id)arg1 ;
-(const char*)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long*)arg2 ;
-(int)decodeInt32ForKey:(id)arg1 ;
-(char)containsValueForKey:(id)arg1 ;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(int)decodeIntForKey:(id)arg1 ;
-(id)decodeDataObject;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)decodePropertyList;
-(unsigned)systemVersion;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(float)decodeFloatForKey:(id)arg1 ;
-(long long)decodeInt64ForKey:(id)arg1 ;
-(id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2 ;
-(char)requiresSecureCoding;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
-(unsigned)_currentUniqueIdentifier;
-(Class)classForClassName:(id)arg1 ;
@end

