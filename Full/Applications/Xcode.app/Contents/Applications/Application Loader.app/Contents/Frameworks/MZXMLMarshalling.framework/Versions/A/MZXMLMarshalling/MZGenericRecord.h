/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/MZXMLMarshalling.framework/Versions/A/MZXMLMarshalling
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MZXMLMarshalling/MZXMLMarshalling-Structs.h>
#import <MZXMLMarshalling/NSCopying.h>

@class NSMutableDictionary, NSString, NSUndoManager;

@interface MZGenericRecord : NSObject <NSCopying> {

	NSMutableDictionary* __contents;
	NSString* __className;
	NSUndoManager* __undoManager;
	NSMutableDictionary* __changeCache;
	char __notifyBindingsObservers;

}
+(id)allKnownKeyPaths;
+(void)initialize;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)classNameForMarshalling;
-(void)setClassNameForMarshalling:(id)arg1 ;
-(void)setNotifyBindingsObservers:(char)arg1 ;
-(void)_cacheValueForKey:(id)arg1 ;
-(char)isUndoRegistrationEnabledForKey:(id)arg1 ;
-(void)observeObject:(id)arg1 keyPath:(id)arg2 selector:(SEL)arg3 ;
-(void)removeObservation:(id)arg1 keyPath:(id)arg2 ;
-(void)observeObjects:(id)arg1 keyPath:(id)arg2 selector:(SEL)arg3 ;
-(void)removeObservations:(id)arg1 keyPath:(id)arg2 ;
-(char)notifyBindingsObservers;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)undoManager;
-(void)willChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)setUndoManager:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
@end
