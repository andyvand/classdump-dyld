/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:39 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/NSCopying.h>
#import <QuartzCore/NSMutableCopying.h>
#import <QuartzCore/NSCoding.h>

@class NSString;

@interface CAFilter : NSObject <NSCopying, NSMutableCopying, NSCoding> {

	unsigned _type;
	NSString* _name;
	unsigned _flags;
	void* _attr;
	void* _cache;

}

@property (readonly) NSString * type; 
@property (copy) NSString * name; 
@property (getter=isEnabled) char enabled; 
@property (assign) char cachesInputImage; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(id)attributesForKey:(id)arg1 ;
+(id)filterTypes;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)filterWithType:(id)arg1 ;
+(id)filterWithName:(id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(id)attributesForKeyPath:(id)arg1 ;
-(void)setCachesInputImage:(char)arg1 ;
-(char)cachesInputImage;
-(char)enabled;
-(void)finalize;
-(void)dealloc;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(id)initWithType:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(id)inputKeys;
-(id)outputKeys;
-(void)setDefaults;
@end

