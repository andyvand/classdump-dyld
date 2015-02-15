/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/MZXMLMarshalling.framework/Versions/A/MZXMLMarshalling
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MZXMLMarshalling/MZXMLMarshalling-Structs.h>
#import <MZXMLMarshalling/NSCopying.h>

@class NSXMLElement, NSString;

@interface MZXMLMapping : NSObject <NSCopying> {

	NSXMLElement* _element;
	NSString* _mappingDescription;

}
+(char)extractStringAttribute:(id)arg1 element:(id)arg2 required:(char)arg3 result:(id*)arg4 error:(id*)arg5 ;
+(char)extractBooleanAttribute:(id)arg1 element:(id)arg2 required:(char)arg3 result:(char*)arg4 error:(id*)arg5 ;
+(char)extractBooleanAttribute:(id)arg1 element:(id)arg2 required:(char)arg3 result:(char*)arg4 defaultValue:(char)arg5 error:(id*)arg6 ;
-(id)initWithXML:(id)arg1 error:(id*)arg2 ;
-(id)mappingDescription;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2 ;
@end
