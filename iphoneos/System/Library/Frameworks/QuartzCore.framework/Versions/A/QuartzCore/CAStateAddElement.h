/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:33 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/Versions/A/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateAddElement : CAStateElement {

	NSString* _keyPath;
	id _object;
	id _beforeObject;

}

@property (nonatomic,copy) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) id object;                     //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) id beforeObject;               //@synthesize beforeObject=_beforeObject - In the implementation block
-(void)foreachLayer:(/*^block*/id)arg1 ;
-(void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3 ;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLTypeForKey:(id)arg1 ;
-(void)setBeforeObject:(id)arg1 ;
-(id)beforeObject;
-(char)matches:(id)arg1 ;
-(void)dealloc;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)object;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)keyPath;
-(void)setObject:(id)arg1 ;
-(void)apply:(id)arg1 ;
@end

