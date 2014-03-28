//
//  JMHostInformation.h
//  CoreLib
//
//  Created by CoreCode on 16.01.05.
/*	Copyright (c) 2014 CoreCode
Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitationthe rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:
The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include <sys/param.h>
#include <sys/mount.h>
#include <IOKit/ps/IOPSKeys.h>
#include <IOKit/ps/IOPowerSources.h>
#include <IOKit/network/IOEthernetInterface.h>
#include <IOKit/network/IONetworkInterface.h>
#include <IOKit/network/IOEthernetController.h>

#define kDiskNameKey                        @"DiskName"
#define kDiskNumberKey                      @"DiskNumber"

@interface JMHostInformation : NSObject

+ (NSURL *)growlInstallURL;
+ (NSString *)ipAddress:(bool)ipv6;
#ifdef USE_SYSTEMCONFIGURATION // requires linking SystemConfiguration.framework
+ (NSString *)ipName;
#endif
+ (NSString *)machineType;

+ (NSString *)nameForDevice:(NSInteger)deviceNumber;
+ (NSString *)bsdPathForVolume:(NSString *)volume;
#ifdef USE_IOKIT // requires linking IOKit.framework
+ (NSString *)macAddress;
+ (BOOL)runsOnBattery;

#ifdef USE_DISKARBITRATION // requires linking DiskArbitration.framework
+ (NSMutableArray *)mountedHarddisks:(BOOL)includeRAIDBackingDevices;
#endif
#endif

@end
