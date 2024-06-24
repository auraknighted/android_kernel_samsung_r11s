/*
 * Copyright (c) 2016-2017 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _UNIFORM_REO_STATUS_HEADER_H_
#define _UNIFORM_REO_STATUS_HEADER_H_
#if !defined(__ASSEMBLER__)
#endif


// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	reo_status_number[15:0], cmd_execution_time[25:16], reo_cmd_execution_status[27:26], reserved_0a[31:28]
//	1	timestamp[31:0]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_UNIFORM_REO_STATUS_HEADER 2

struct uniform_reo_status_header {
             uint32_t reo_status_number               : 16, //[15:0]
                      cmd_execution_time              : 10, //[25:16]
                      reo_cmd_execution_status        :  2, //[27:26]
                      reserved_0a                     :  4; //[31:28]
             uint32_t timestamp                       : 32; //[31:0]
};

/*

reo_status_number
			
			Consumer: SW , DEBUG
			
			Producer: REO
			
			
			
			The value in this field is equal to value of the
			'REO_CMD_Number' field the REO command 
			
			
			
			This field helps to correlate the statuses with the REO
			commands.
			
			
			
			<legal all> 

cmd_execution_time
			
			Consumer: DEBUG
			
			Producer: REO 
			
			
			
			The amount of time REO took to excecute the command.
			Note that this time does not include the duration of the
			command waiting in the command ring, before the execution
			started.
			
			
			
			In us.
			
			
			
			<legal all>

reo_cmd_execution_status
			
			Consumer: DEBUG
			
			Producer: REO 
			
			
			
			Execution status of the command.
			
			
			
			<enum 0 reo_successful_execution> Command has
			successfully be executed
			
			<enum 1 reo_blocked_execution> Command could not be
			executed as the queue or cache was blocked
			
			<enum 2 reo_failed_execution> Command has encountered
			problems when executing, like the queue descriptor not being
			valid. None of the status fields in the entire STATUS TLV
			are valid.
			
			<enum 3 reo_resource_blocked> Command is NOT  executed
			because one or more descriptors were blocked. This is SW
			programming mistake.
			
			None of the status fields in the entire STATUS TLV are
			valid.
			
			
			
			<legal  0-3>

reserved_0a
			
			<legal 0>

timestamp
			
			Timestamp at the moment that this status report is
			written.
			
			
			
			<legal all>
*/


/* Description		UNIFORM_REO_STATUS_HEADER_0_REO_STATUS_NUMBER
			
			Consumer: SW , DEBUG
			
			Producer: REO
			
			
			
			The value in this field is equal to value of the
			'REO_CMD_Number' field the REO command 
			
			
			
			This field helps to correlate the statuses with the REO
			commands.
			
			
			
			<legal all> 
*/
#define UNIFORM_REO_STATUS_HEADER_0_REO_STATUS_NUMBER_OFFSET         0x00000000
#define UNIFORM_REO_STATUS_HEADER_0_REO_STATUS_NUMBER_LSB            0
#define UNIFORM_REO_STATUS_HEADER_0_REO_STATUS_NUMBER_MASK           0x0000ffff

/* Description		UNIFORM_REO_STATUS_HEADER_0_CMD_EXECUTION_TIME
			
			Consumer: DEBUG
			
			Producer: REO 
			
			
			
			The amount of time REO took to excecute the command.
			Note that this time does not include the duration of the
			command waiting in the command ring, before the execution
			started.
			
			
			
			In us.
			
			
			
			<legal all>
*/
#define UNIFORM_REO_STATUS_HEADER_0_CMD_EXECUTION_TIME_OFFSET        0x00000000
#define UNIFORM_REO_STATUS_HEADER_0_CMD_EXECUTION_TIME_LSB           16
#define UNIFORM_REO_STATUS_HEADER_0_CMD_EXECUTION_TIME_MASK          0x03ff0000

/* Description		UNIFORM_REO_STATUS_HEADER_0_REO_CMD_EXECUTION_STATUS
			
			Consumer: DEBUG
			
			Producer: REO 
			
			
			
			Execution status of the command.
			
			
			
			<enum 0 reo_successful_execution> Command has
			successfully be executed
			
			<enum 1 reo_blocked_execution> Command could not be
			executed as the queue or cache was blocked
			
			<enum 2 reo_failed_execution> Command has encountered
			problems when executing, like the queue descriptor not being
			valid. None of the status fields in the entire STATUS TLV
			are valid.
			
			<enum 3 reo_resource_blocked> Command is NOT  executed
			because one or more descriptors were blocked. This is SW
			programming mistake.
			
			None of the status fields in the entire STATUS TLV are
			valid.
			
			
			
			<legal  0-3>
*/
#define UNIFORM_REO_STATUS_HEADER_0_REO_CMD_EXECUTION_STATUS_OFFSET  0x00000000
#define UNIFORM_REO_STATUS_HEADER_0_REO_CMD_EXECUTION_STATUS_LSB     26
#define UNIFORM_REO_STATUS_HEADER_0_REO_CMD_EXECUTION_STATUS_MASK    0x0c000000

/* Description		UNIFORM_REO_STATUS_HEADER_0_RESERVED_0A
			
			<legal 0>
*/
#define UNIFORM_REO_STATUS_HEADER_0_RESERVED_0A_OFFSET               0x00000000
#define UNIFORM_REO_STATUS_HEADER_0_RESERVED_0A_LSB                  28
#define UNIFORM_REO_STATUS_HEADER_0_RESERVED_0A_MASK                 0xf0000000

/* Description		UNIFORM_REO_STATUS_HEADER_1_TIMESTAMP
			
			Timestamp at the moment that this status report is
			written.
			
			
			
			<legal all>
*/
#define UNIFORM_REO_STATUS_HEADER_1_TIMESTAMP_OFFSET                 0x00000004
#define UNIFORM_REO_STATUS_HEADER_1_TIMESTAMP_LSB                    0
#define UNIFORM_REO_STATUS_HEADER_1_TIMESTAMP_MASK                   0xffffffff


#endif // _UNIFORM_REO_STATUS_HEADER_H_
