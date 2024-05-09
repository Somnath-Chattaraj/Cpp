import java.util.Scanner

fun main(args: Array<String>) {
    val scanner = Scanner(System.`in`)
    var t = scanner.nextInt()
    while (t-- > 0) {
        val a = scanner.next()
        val b = scanner.next()
        val na = a.length
        val nb = b.length
        when (a[na - 1]) {
            'S' -> {
                when (b[nb - 1]) {
                    'S' -> {
                        when {
                            na == nb -> println("=")
                            na > nb -> println("<")
                            else -> println(">")
                        }
                    }
                    else -> println("<")
                }
            }
            'M' -> {
                when (b[nb - 1]) {
                    'M' -> {
                        when {
                            na == nb -> println("=")
                            na > nb -> println(">")
                            else -> println("<")
                        }
                    }
                    'S' -> println(">")
                    'L' -> println("<")
                }
            }
            'L' -> {
                when (b[nb - 1]) {
                    'L' -> {
                        when {
                            na == nb -> println("=")
                            na > nb -> println(">")
                            else -> println("<")
                        }
                    }
                    else -> println(">")
                }
            }
        }
    }
}