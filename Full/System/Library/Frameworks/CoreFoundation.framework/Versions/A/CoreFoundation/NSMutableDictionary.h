/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:54 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/Versions/A/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface NSMutableDictionary : NSDictionary
+(id)nonRetainingDictionary;
+(id)retainingKeyDictionary;
+(id)nonRetainingKeyAndValueDictionary;
+(id)dictionaryWithOBEXHeadersData:(const void*)arg1 headersDataSize:(unsigned long long)arg2 ;
+(id)dictionaryWithOBEXHeadersData:(id)arg1 ;
+(id)withOBEXHeadersData:(const void*)arg1 headersDataSize:(unsigned long long)arg2 ;
+(id)dictionaryWithCapacity:(unsigned long long)arg1 ;
+(id)dictionaryWithSharedKeySet:(id)arg1 ;
-(void)overwriteEntriesFromDictionary:(id)arg1 ;
-(void)addTimer:(id)arg1 toGroup:(id)arg2 ;
-(void)removeTimer:(id)arg1 fromGroup:(id)arg2 ;
-(char)listenerRegistered:(id)arg1 forTimeInterval:(id)arg2 ;
-(id)timeoutIntervalsForListener:(id)arg1 ;
-(void)setCGFloat:(double)arg1 forKey:(id)arg2 ;
-(void)setSize:(CGSize)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forIntegerKey:(long long)arg2 ;
-(void)removeObjectForIntegerKey:(long long)arg1 ;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
-(void)fixupRFC2231ValuesWithSender:(id)arg1 fromWindows:(char)arg2 ;
-(char)addKeyValuePairFromString:(id)arg1 ;
-(id)cueFileCDTextItems;
-(id)CALsafeObjectForKey:(id)arg1 calculatedWithBlock:(/*^block*/id)arg2 ;
-(void)isd_setObjectOrRemoveNil:(id)arg1 forKey:(id)arg2 ;
-(void)ensureAllEqualValuesAreIdentical;
-(void)isd_addObject:(id)arg1 toSetForKey:(id)arg2 ;
-(void)isd_addObject:(id)arg1 toArrayForKey:(id)arg2 ;
-(int)isd_collectionType;
-(void)CDVAddObjectsAndKeys:(id)arg1 ;
-(void)cr_setNonNilObject:(id)arg1 forKey:(id)arg2 ;
-(void)ComAppleInternetAccountsSafeSetObject:(id)arg1 forKey:(id)arg2 ;
-(id)ComAppleInternetAccountsSafeObjectForKey:(id)arg1 ;
-(id)ComAppleInternetAccountsSafeAllKeys;
-(void)abSetNonNilObject:(id)arg1 forKey:(id)arg2 ;
-(id)_stripDotEntries;
-(void)_mergeEntriesFromDictionary:(id)arg1 maxDepth:(unsigned long long)arg2 ;
-(void)_setNullForKey:(id)arg1 ;
-(void)_cn_setNonNilObject:(id)arg1 forKey:(id)arg2 ;
-(void)addEntriesFromDictionaryWithRecursion:(id)arg1 ;
-(void)setArrayFE_BU:(id)arg1 forKey:(id)arg2 ;
-(void)setCGFloatFE_BU:(double)arg1 forKey:(id)arg2 ;
-(void)setDoubleFE_BU:(double)arg1 forKey:(id)arg2 ;
-(void)setSInt64FE_BU:(long long)arg1 forKey:(id)arg2 ;
-(void)setBoolFE_BU:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setIntegerFE_BU:(long long)arg1 forKey:(id)arg2 ;
-(void)setFourCharCodeFE_BU:(unsigned)arg1 forKey:(id)arg2 ;
-(void)setSizeFE_BU:(const CGSize*)arg1 forKey:(id)arg2 ;
-(void)setPointFE_BU:(const CGPoint*)arg1 forKey:(id)arg2 ;
-(void)setRectFE_BU:(const CGRect*)arg1 forKey:(id)arg2 ;
-(void)setStringFE_BU:(id)arg1 forKey:(id)arg2 ;
-(void)setNumberFE_BU:(id)arg1 forKey:(id)arg2 ;
-(void)setDataFE_BU:(id)arg1 forKey:(id)arg2 ;
-(void)setDictionaryFE_BU:(id)arg1 forKey:(id)arg2 ;
-(void)_webkit_setInt:(int)arg1 forKey:(id)arg2 ;
-(void)_webkit_setFloat:(float)arg1 forKey:(id)arg2 ;
-(void)_webkit_setBool:(char)arg1 forKey:(id)arg2 ;
-(void)_webkit_setLongLong:(long long)arg1 forKey:(id)arg2 ;
-(void)_webkit_setUnsignedLongLong:(unsigned long long)arg1 forKey:(id)arg2 ;
-(void)_web_setObjectIfNotNil:(id)arg1 forKey:(id)arg2 ;
-(int)addNameHeader:(id)arg1 ;
-(int)addDescriptionHeader:(id)arg1 ;
-(int)addCountHeader:(unsigned)arg1 ;
-(int)addTime4ByteHeader:(unsigned)arg1 ;
-(int)addLengthHeader:(unsigned)arg1 ;
-(int)addTypeHeader:(id)arg1 ;
-(int)addTimeISOHeader:(const void*)arg1 length:(unsigned)arg2 ;
-(int)addTargetHeader:(const void*)arg1 length:(unsigned)arg2 ;
-(int)addHTTPHeader:(const void*)arg1 length:(unsigned)arg2 ;
-(int)addBodyHeader:(const void*)arg1 length:(unsigned)arg2 endOfBody:(char)arg3 ;
-(int)addWhoHeader:(const void*)arg1 length:(unsigned)arg2 ;
-(int)addConnectionIDHeader:(const void*)arg1 length:(unsigned)arg2 ;
-(int)addApplicationParameterHeader:(const void*)arg1 length:(unsigned)arg2 ;
-(int)addByteSequenceHeader:(const void*)arg1 length:(unsigned)arg2 ;
-(int)addObjectClassHeader:(const void*)arg1 length:(unsigned)arg2 ;
-(int)addUserDefinedHeader:(const void*)arg1 length:(unsigned)arg2 ;
-(int)addAuthorizationChallengeHeader:(const void*)arg1 length:(unsigned)arg2 ;
-(int)addAuthorizationResponseHeader:(const void*)arg1 length:(unsigned)arg2 ;
-(int)addImageDescriptorHeader:(const void*)arg1 length:(unsigned)arg2 ;
-(int)addImageHandleHeader:(id)arg1 ;
-(id)getHeaderBytes;
-(void)takeStoredValue:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)_web_setInt:(int)arg1 forKey:(id)arg2 ;
-(void)_web_setBool:(char)arg1 forKey:(id)arg2 ;
-(void)_web_setObject:(id)arg1 forUncopiedKey:(id)arg2 ;
-(Class)classForCoder;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(void)takeValue:(id)arg1 forKey:(id)arg2 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)__addObject:(id)arg1 forKey:(id)arg2 ;
-(void)replaceObject:(id)arg1 forKey:(id)arg2 ;
-(void)__setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_mutate;
-(void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)addObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)addObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)removeEntriesInDictionary:(id)arg1 ;
-(void)removeEntriesPassingTest:(/*^block*/id)arg1 ;
-(void)removeKeysForObject:(id)arg1 ;
-(void)replaceObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)replaceObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)setEntriesFromDictionary:(id)arg1 ;
-(void)setObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)setObjects:(id)arg1 forKeys:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)addEntriesFromDictionary:(id)arg1 ;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(void)invert;
-(void)setDictionary:(id)arg1 ;
-(void)addObject:(id)arg1 forKey:(id)arg2 ;
@end

