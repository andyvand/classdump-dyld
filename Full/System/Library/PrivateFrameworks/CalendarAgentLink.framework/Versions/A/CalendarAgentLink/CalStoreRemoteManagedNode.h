/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:25 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarAgentLink.framework/Versions/A/CalendarAgentLink
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarAgentLink/CalStoreRemoteManagedObject.h>

@class NSColor, NSString, NSURL;

@interface CalStoreRemoteManagedNode : CalStoreRemoteManagedObject {

	NSColor* _color;
	char _isWritable;
	NSString* _notes;
	NSURL* _objectURI;
	int _order;
	NSString* _title;
	NSString* _type;
	NSString* _uid;

}

@property (nonatomic,retain) NSColor * color;               //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) char isWritable;               //@synthesize isWritable=_isWritable - In the implementation block
@property (nonatomic,retain) NSString * notes;              //@synthesize notes=_notes - In the implementation block
@property (assign,nonatomic) int order;                     //@synthesize order=_order - In the implementation block
@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * type;               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * uid;                //@synthesize uid=_uid - In the implementation block
+(id)colorFromHexString:(id)arg1 ;
+(id)hexValueForColor:(id)arg1 ;
+(char)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)type;
-(long long)compare:(id)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(void)setColor:(NSColor *)arg1 ;
-(NSColor *)color;
-(NSString *)uid;
-(int)order;
-(void)setOrder:(int)arg1 ;
-(char)isWritable;
-(void)setUid:(NSString *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(void)setIsWritable:(char)arg1 ;
-(long long)compareTitle:(id)arg1 ;
@end

