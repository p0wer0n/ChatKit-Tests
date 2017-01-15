/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileManager.h>

@interface IMFileManager : NSFileManager
+(id)defaultManager;
+(id)defaultHFSFileManager;
-(id)MIMETypeOfPathExtension:(id)arg1 ;
-(id)displayNameOfFileWithName:(id)arg1 hfsFlags:(unsigned short)arg2 ;
-(id)pathExtensionForMIMEType:(id)arg1 ;
-(id)UTITypeOfMimeType:(id)arg1 ;
-(id)pathExtensionForUTIType:(id)arg1 ;
-(id)UTITypeOfPath:(id)arg1 ;
-(id)UTITypeOfPathExtension:(id)arg1 ;
-(id)attributesOfItemAtPath:(id)arg1 error:(id*)arg2 ;
-(id)MIMETypeOfPath:(id)arg1 ;
@end
